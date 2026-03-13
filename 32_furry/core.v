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
assign m0 = (m == 0 && t == RUN);

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
reg [31:0]  sgn, ea;                // Выбранный SEGMENT:EA
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

    // Копирование первоначальных значений при сбросе
    eax     <= _eax; ebx <= _ebx; ecx <= _ecx; edx <= _edx;
    esp     <= _esp; ebp <= _ebp; esi <= _esi; edi <= _edi;

    es      <= _es;
    cs      <= _cs;
    ss      <= _ss;
    ds      <= _ds;

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
        dir     <= i[1];
        size    <= i[0];

        if (c0) sgn <= ds;

    end

    case (t)

    // ИСПОЛНЕНИЕ ИНСТРУКЦИИ
    RUN: casex (opcode)

        // ### ALU-операции с операндами ModRM [3T+]
        8'b00xxx0xx: case (m)

            0: begin t <= MODRM; alu <= opcode[5:3]; end
            1: begin

                m     <= 0;
                t     <= alu == CMP ? RUN : WB;
                wb    <= ar;
                flags <= af;

                if (alu == CMP) `TERM;

            end

        endcase

        // ### MOV rb, imm8
        8'b10110xxx: case (m)

            0: begin `WR8(opcode[2:0]); end
            1: begin m <= 0; t <= WB; wb <= i; eip <= eipn; end

        endcase

        // ### MOV rv, imm [4T/6T]
        8'b10111xxx: case (m)

            0: begin `WR16(opcode[2:0]); end
            1: begin eip <= eipn; wb        <= i; m <= 2; end
            2: begin eip <= eipn; wb[15:8]  <= i; m <= op66 ? 0 : 3; if (op66) t <= WB; end
            3: begin eip <= eipn; wb[23:16] <= i; m <= 4; end
            4: begin eip <= eipn; wb[31:24] <= i; m <= 0; t <= WB; end

        endcase

        // ### Префикс ES/CS/SS/DS [1T]
        8'b00100110: begin m <= 0; over <= 1; sgn <= es; end
        8'b00101110: begin m <= 0; over <= 1; sgn <= cs; end
        8'b00110110: begin m <= 0; over <= 1; sgn <= ss; end
        8'b00111110: begin m <= 0; over <= 1; sgn <= ds; end

        // ### Opsize, Adsize
        8'b01100110: begin m <= 0; op66 <= ~op66; end
        8'b01100111: begin m <= 0; op67 <= ~op67; end

        // ### REPNZ, REPZ [1T]
        8'b1111001x: begin m <= 0; rep <= i[1:0]; end

    endcase

    // СЧИТЫВАНИЕ ОПЕРАНДОВ ИЗ РЕГИСТРОВ ИЛИ ИЗ ПАМЯТИ
    MODRM: case (m1)

        // Разбор 16/32 эффективного адреса и регистров при необходимости
        0: begin

            modrm   <= i;
            eip     <= eipn;
            op1     <= dir ? i53 : i20;
            op2     <= dir ? i20 : i53;

            if (op67) begin


                // Вычислить эффективный 16-битный адрес
                case (i[2:0])
                3'b000: ea <= ebx[15:0] + esi[15:0];
                3'b001: ea <= ebx[15:0] + edi[15:0];
                3'b010: ea <= ebp[15:0] + esi[15:0];
                3'b011: ea <= ebp[15:0] + edi[15:0];
                3'b100: ea <= esi[15:0];
                3'b101: ea <= edi[15:0];
                3'b110: ea <= i[7:6] ? ebp[15:0] : 0;
                3'b111: ea <= ebx[15:0];
                endcase

                // Возможные 16-битные смещения
                casex (i)
                8'b00_xxx_110: begin m1 <= 2; end           // OFFSET16
                8'b00_xxx_xxx: begin m1 <= 6; `CPEN; end    // Читать операнд
                8'b01_xxx_xxx: begin m1 <= 1; end           // +Смещение 8 бит
                8'b10_xxx_xxx: begin m1 <= 2; end           // +Смещение 16 бит
                8'b11_xxx_xxx: begin m1 <= 0; t <= RUN; end // Регистры. Вернуться к RUN
                endcase

                if (!over && ((^i[7:6] && i[2:0] == 3'b110) || i[2:1] == 2'b01)) sgn <= ss;

            end else begin

                ea <= i20;

                // Эффективный 32-х битный адрес
                casex (i)
                8'b00_xxx_100: begin m1 <= 10; end          // SIB
                8'b00_xxx_101: begin ea <= 0; m2 <= 2;  end // A32
                8'b01_xxx_101: begin m1 <= 1; if (!over) sgn <= ss; end
                8'b10_xxx_101: begin m1 <= 2; if (!over) sgn <= ss; end
                8'b01_xxx_xxx: begin m1 <= 1; end           // +D8
                8'b10_xxx_xxx: begin m1 <= 2; end           // +32
                8'b11_xxx_xxx: begin m1 <= 0; t <= RUN; end
                endcase

            end

        end

        // DISP8
        1: begin m1 <= 4; eip <= eipn; ea <= ea + sign; `CPEN; end

        // DISP16/32
        2: begin m1 <= 3; eip <= eipn; ea <= ea + {8'b0, i}; end
        3: begin m1 <= 4; eip <= eipn; ea <= ea + {i, 8'b0}; if (!op67) m1 <= 4; else begin `CPEN; end end
        4: begin m1 <= 5; eip <= eipn; ea <= ea + {i, 16'b0}; end
        5: begin m1 <= 0; eip <= eipn; ea <= ea + {i, 24'b0}; `CPEN; end

        // Читать 8-битный операнд
        6: begin

            if (dir) op2 <= i; else op1 <= i;
            if (size) begin m1 <= 5; ea <= ean; end
            else      begin m1 <= 0; cp <= cpm; t <= RUN; end

        end

        // Читать 16-битный операнд
        7: begin

            if (dir) op2[15:8] <= i; else op1[15:8] <= i;

            if (!op67) m1 <= 8;
            else begin

                t  <= RUN;
                m1 <= 0;
                ea <= ea - 1;
                cp <= cpm;

            end

        end

        // Читать операнд 32-х бит
        8: begin m1 <= 9; if (dir) op2[23:16] <= i; else op1[23:16] <= i; end
        9: begin

            if (dir) op2[31:24] <= i; else op1[31:24] <= i;

            t  <= RUN;
            m1 <= 0;
            ea <= ea - 3;
            cp <= cpm;

        end

        // SIB
        10: begin end

    endcase

    // [1T,2-3T] ЗАПИСЬ РЕЗУЛЬТАТОВ WB,DIR,SIZE,MODRM В ПАМЯТЬ/РЕГИСТРЫ
    WB: case (m2)

        // Записать в регистры, если это явно указано
        0: if (dir || modrm[7:6] == 2'b11) begin

            t  <= next;
            cp <= 0;

            casex ({op66, size, dir ? modrm[5:3] : modrm[2:0]})
            // 8
            5'bx0_000: eax[ 7:0] <= wb[7:0];
            5'bx0_001: ecx[ 7:0] <= wb[7:0];
            5'bx0_010: edx[ 7:0] <= wb[7:0];
            5'bx0_011: ebx[ 7:0] <= wb[7:0];
            5'bx0_100: eax[15:8] <= wb[7:0];
            5'bx0_101: ecx[15:8] <= wb[7:0];
            5'bx0_110: edx[15:8] <= wb[7:0];
            5'bx0_111: ebx[15:8] <= wb[7:0];
            // 32
            5'b01_000: eax <= wb;
            5'b01_001: ecx <= wb;
            5'b01_010: edx <= wb;
            5'b01_011: ebx <= wb;
            5'b01_100: esp <= wb;
            5'b01_101: ebp <= wb;
            5'b01_110: esi <= wb;
            5'b01_111: edi <= wb;
            // 16
            5'b11_000: eax[15:0] <= wb[15:0];
            5'b11_001: ecx[15:0] <= wb[15:0];
            5'b11_010: edx[15:0] <= wb[15:0];
            5'b11_011: ebx[15:0] <= wb[15:0];
            5'b11_100: esp[15:0] <= wb[15:0];
            5'b11_101: ebp[15:0] <= wb[15:0];
            5'b11_110: esi[15:0] <= wb[15:0];
            5'b11_111: edi[15:0] <= wb[15:0];
            endcase

            `TERM_FN;

        end
        // Либо записать в память младший байт wb
        else begin w <= 1; cp <= 1; m2 <= 1; o <= wb[7:0]; end
        // Старший байт нижнего слова
        1: begin

            o  <= wb[15:8];
            w  <= size;
            ea <= ean;

            if (size && !op66) m2 <= 2;
            else if (!size) begin m2 <= 0; cp <= 0; t <= next; `TERM_FN; end

        end
        // Верхнее слово
        2: begin m2 <= 3; w <= 1; o <= wb[23:16]; end
        3: begin m2 <= 4; w <= 1; o <= wb[31:24]; end
        4: begin m2 <= 0; cp <= 0; t <= next; `TERM_FN; end

    endcase // Завершение m2

    // [3T] ВЫГРУЗКА WB -> В СТЕК
    PUSH: case (m3)
    0: begin

        w  <= 1; o   <= wb[ 7:0];
        cp <= 1; esp <= esp - 2; sgn <= ss;
        m3 <= 1; ea  <= esp - 2;

    end
    1: begin o <= wb[15:8];  m3 <= op66 ? 4 : 2; ea <= ean; w <= 1; end
    2: begin o <= wb[23:16]; m3 <= 3; ea <= ean; w <= 1; end
    3: begin o <= wb[31:24]; m3 <= 4; ea <= ean; w <= 1; end
    4: begin `TERM_FN;       m3 <= 0; cp <= 0; t <= next; end
    endcase

    // [3T] ЗАГРУЗКА ИЗ СТЕКА -> WB
    POP: case (m3)
    0: begin m3 <= 1; cp <= 1; sgn <= ss; ea <= esp; esp <= esp + 2; end
    1: begin m3 <= op66 ? 4 : 2; wb <= i; ea <= ean; end
    2: begin m3 <= 3; wb[15:8]  <= i; ea <= ean; end
    3: begin m3 <= 4; wb[23:16] <= i; ea <= ean; end
    4: begin

        t  <= next;
        m3 <= 0;
        cp <= 0;

        if (op66) wb[15:8] <= i; else wb[31:24] <= i;

        `TERM_FN;

    end

    endcase

    // [17T] ВЫЗОВ ПРОЦЕДУРЫ INTERRUPT
    INTERRUPT: case (m4)
    0: begin m4 <= 1; t  <= PUSH; wb <= {4'hF, flags}; next <= INTERRUPT; end
    1: begin m4 <= 2; t  <= PUSH; wb <= cs; end
    2: begin m4 <= 3; t  <= PUSH; wb <= eip; end
    3: begin m4 <= 4; ea <= {interrupt, 2'b00}; sgn <= 0; cp <= 1; end
    4: begin m4 <= 5; eip[ 7:0] <= i; ea <= ean; end
    5: begin m4 <= 6; eip[15:8] <= i; ea <= ean; end
    6: begin m4 <= 7; cs[ 7:0]  <= i; ea <= ean; end
    7: begin m4 <= 0; cs[15:8]  <= i; cp <= 0; t <= RUN; flags[IF] <= 1'b0; m <= 0; `TERM; end
    endcase

    endcase

end

endmodule
