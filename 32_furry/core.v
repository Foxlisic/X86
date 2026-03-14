module core
(
    // --- УПРАВЛЯЮЩИЕ
    input               clock,      // 25Мгц
    input               rst_n,      // =0 Сброс процессора
    input               ce,         // =1 Активация чипа
    output              m0,         // Первый такт
    // --- ПАМЯТЬ
    output      [31:0]  a,          // Адрес в общей памяти
    input       [ 7:0]  i,          // Данные из памяти
    output reg  [ 7:0]  o,          // Данные в память
    output reg          w,          // Запись в память,
    // --- РЕГИСТРЫ
    output reg  [31:0]  eax,
    output reg  [31:0]  ebx,
    output reg  [31:0]  ecx,
    output reg  [31:0]  edx,
    output reg  [31:0]  esp,
    output reg  [31:0]  ebp,
    output reg  [31:0]  esi,
    output reg  [31:0]  edi,
    // --- СЕГМЕНТЫ
    output reg  [15:0]  es,
    output reg  [15:0]  cs,
    output reg  [15:0]  ss,
    output reg  [15:0]  ds,
    // --- УПРАВЛЯЮЩИЕ
    output reg  [31:0]  eip,
    output reg  [11:0]  flags,
    // --- ИНИЦИАЛИЗАЦИЯ
    input       [31:0]  _eax,
    input       [31:0]  _ebx,
    input       [31:0]  _ecx,
    input       [31:0]  _edx,
    input       [31:0]  _esp,
    input       [31:0]  _ebp,
    input       [31:0]  _esi,
    input       [31:0]  _edi,
    input       [15:0]  _es,
    input       [15:0]  _cs,
    input       [15:0]  _ss,
    input       [15:0]  _ds,
    input       [31:0]  _eip,
    input       [11:0]  _flags
);

assign a  = cp ? sgn*16 + ea : cs*16 + eip;

localparam
    RUN         = 0, // Исполнение
    MODRM       = 1, // Разбор операндов
    WB          = 2, // Запись результата
    PUSH        = 3, // Запись wb в стек
    POP         = 4, // Чтение из стека -> wb
    DIV         = 5, // Деление op1/op2
    INTERRUPT   = 6, // Вызов прерывания
    UNDEF       = 7; // Ошибка опкода

localparam ADD = 0, OR  = 1, ADC = 2, SBB  = 3, AND = 4, SUB = 5, XOR = 6, CMP = 7;
localparam ROL = 0, ROR = 1, RCL = 2, RCR  = 3, SHL = 4, SHR = 5, SAL = 6, SAR = 7;
localparam CF  = 0, PF  = 2, AF  = 4, ZF   = 6, SF  = 7, TF  = 8, IF  = 9, DF  = 10, OF = 11;

// -----------------------------------------------------
`define CPEN cp <= cpen; if (!cpen) begin m1 <= 0; t <= RUN; end
`define TERM {m, rep, over, op66, op67, sgn} <= ds;
// Если эта процедура является завершающей, так как переход идет на RUN
`define TERM_FN if (next == RUN && !m) `TERM
// Подготовка записи в 8 битный регистр
`define WR8(a)  {modrm[5:3], dir, size} <= {a, 2'b10}
`define WR16(a) {modrm[5:3], dir, size} <= {a, 2'b11}
// -----------------------------------------------------
reg         cp;                     // =1 Указатель на SGN:EA =0 Иначе CS:IP
reg         cpm;                    // =0 Устанавливается cp после MODRM
reg         size;                   // =1 16bit =0 8bit
reg         dir;                    // =0 rm,r; =1 r,rm
reg         cpen;                   // =0 То пропускает чтение операндов
reg         over;                   // =1 Сегмент переопределен
reg         intrc;                  // Предыдущее значение intr
reg [ 1:0]  rep;                    // Наличие REP:
reg [ 3:0]  t, next;                // Исполняемая команда (t) в данный момент
reg [ 3:0]  m, m1;                  // Фаза исполнения T (m), MODRM и субфаза
reg [ 2:0]  m2, m3, m4;             // Фаза исполнения WB, PUSH/POP
reg [ 2:0]  alu;                    // Функция АЛУ или сдвигов
reg [ 7:0]  modrm, sib, opcache;    // Кешированные значения
reg [ 7:0]  interrupt;              // Номер прерывания
reg [15:0]  sgn;
reg [31:0]  ea;                     // Выбранный SEGMENT:EA
reg [31:0]  op1, op2, wb, t16;      // Операнды; wb-что записывать
reg         op66, op67;             // Сужение битности 32 до 16 если =1
// -----------------------------------------------------
assign      m0 = (t == RUN && m == 0);
wire        c0 = m0 && {over, rep} == 3'b0;
wire [7:0]  opcode = m || t ? opcache : i;
// -----------------------------------------------------
wire [255:0] u20 = {edi, esi, ebp, esp, ebx, edx, ecx, eax};
// ----
wire [ 31:0] r20 = u20 >> {i[2:0], 5'b0};
wire [ 31:0] r53 = u20 >> {i[5:3], 5'b0};
wire [  7:0] s20 = u20 >> {i[1:0], 1'b0, i[2], 3'b0};
wire [  7:0] s53 = u20 >> {i[4:3], 1'b0, i[5], 3'b0};
// ----
wire [ 31:0] i20 = size ? (op66 ? r20[15:0] : r20) : s20;
wire [ 31:0] i53 = size ? (op66 ? r53[15:0] : r53) : s53;
// ----
wire [ 31:0] sign = {{24{i[7]}}, i};
wire [ 31:0] eipn = eip + 1'b1;
wire [ 31:0] ean  = ea  + 1'b1;
// -----------------------------------------------------
wire [4:0]  top = size ? (op66 ? 15 : 31) : 7;
wire [32:0] ar =
    alu == ADD ? op1 + op2 :
    alu == ADC ? op1 + op2 + flags[CF] :
    alu == SBB ? op1 - op2 - flags[CF] :
    alu == AND ? op1 & op2 :
    alu == XOR ? op1 ^ op2 :
    alu == OR  ? op1 | op2 : op1 - op2;

wire isa    = alu == ADD || alu == ADC;
wire isl    = alu != AND && alu != OR && alu != XOR;
wire new_o  = (op1[top] ^ op2[top] ^ isa) & (op1[top] ^ ar[top]);
wire new_s  = ar[top];
wire new_z  = 0 == (size ? ar[15:0] : ar[7:0]);
wire new_a  = op1[4] ^ op2[4] ^ ar[4];
wire new_p  = ~^ar[7:0];
wire new_c  = ar[top + 1];

wire [11:0] af = {new_o & isl, flags[10:8], new_s, new_z, 1'b0, new_a & isl, 1'b0, new_p, 1'b1, new_c & isl};
// -----------------------------------------------------

always @(posedge clock)
// Сброс процессора
if (rst_n == 0) begin

    t       <= RUN;
    m       <= 0;
    cp      <= 0;
    op66    <= 0;
    op67    <= 0;
    modrm   <= 0;
    sib     <= 0;
    over    <= 0;
    rep     <= 0;

    // Копирование первоначальных значений при сбросе
    eax     <= _eax; ebx <= _ebx; ecx <= _ecx; edx <= _edx;
    esp     <= _esp; ebp <= _ebp; esi <= _esi; edi <= _edi;

    es      <= _es;
    cs      <= _cs;
    ss      <= _ss;
    ds      <= _ds;
    sgn     <= _ds;

    eip     <= _eip;
    flags   <= _flags;

end
// Запуск выполнения команд процессора
else if (ce) begin

    w <= 0;

    // Очистить управляющие регистры в начале инструкции
    if (m0) begin

        next    <= RUN;
        eip     <= eipn;
        op1     <= 0;
        op2     <= 0;
        alu     <= i[5:3];
        m       <= 1;
        m1      <= 0;
        m2      <= 0;
        m3      <= 0;
        m4      <= 0;
        cpm     <= 1;
        cpen    <= 1;
        opcache <= i;
        size    <= i[0];
        dir     <= i[1];

        if (c0) sgn <= ds;

    end

    case (t)
    `include "core_run.v"
    `include "core_modrm.v"
    `include "core_proc.v"
    endcase

end

endmodule
