// ---------------------------------------------------------------------
// Базовое арифметическо-логическое устройство
// ---------------------------------------------------------------------

wire [16:0] ar =
    alu == ADD ? op1 + op2 :
    alu == ADC ? op1 + op2 + flags[CF] :
    alu == SBB ? op1 - op2 - flags[CF] :
    alu == AND ? op1 & op2 :
    alu == XOR ? op1 ^ op2 :
    alu == OR  ? op1 | op2 :
                 op1 - op2;

wire [3:0]  top = size ? 15 : 7;
wire        isa = alu == ADD || alu == ADC;
wire        isl = alu != AND && alu != OR && alu != XOR;

// Вычисление флагов
wire new_o = (op1[top] ^ op2[top] ^ isa) & (op1[top] ^ ar[top]);
wire new_s = ar[top];
wire new_z = 0 == (size ? ar[15:0] : ar[7:0]);
wire new_a = op1[4] ^ op2[4] ^ ar[4];
wire new_p = ~^ar[7:0];
wire new_c = ar[top + 1];

// Итоговые флаги
wire [11:0] af = {isl & new_o, flags[10:8], new_s, new_z, 1'b0, isl & new_a, 1'b0, new_p, 1'b1, isl & new_c};

// ---------------------------------------------------------------------
// Десятичная коррекция DAA, DAS, AAA, AAS
// ---------------------------------------------------------------------

wire        das   = opcode[3];
wire        daa_a = flags[AF] || ax[3:0] > 8'h09;
wire        daa_c = flags[CF] || ax[7:0] > 8'h9F || daa_t[8];
wire [ 8:0] daa_t = das ? (ax[7:0] - (daa_a ? 8'h06 : 0)) : (ax[7:0] + (daa_a ? 8'h06 : 0));
wire [ 7:0] daa   = das ? (daa_t   - (daa_c ? 8'h60 : 0)) : (daa_t   + (daa_c ? 8'h60 : 0));
wire [11:0] daa_f = {flags[11:8], daa[7], daa == 0, 1'b0, daa_a | flags[AF], 1'b0, ~^daa, 1'b1, daa_c | flags[CF]};
wire [ 3:0] aaa_a = das ? (ax[ 7:0] - (daa_a ? 8'h06 : 0)) : (ax[ 7:0] + (daa_a ? 8'h06 : 0));
wire [ 7:0] aaa_b = das ? (ax[15:8] - (daa_a ? 8'h01 : 0)) : (ax[15:8] + (daa_a ? 8'h01 : 0));

// Знаковое умножение это просто умножение обычное
reg         imulw;
wire [31:0] imul_r = op1 * op2;
wire        imul_o = |imul_r[31:16];
wire        imul_z =  imul_r[15:0] == 0;

// -----------------------------------------------------------------------------
// Вычисление сдвигов
// -----------------------------------------------------------------------------

// Входящие (I)-операнд и (S)-сдвиги
wire [15:0] ri = size ? op1 : {op1[7:0], op1[7:0]};
wire [ 3:0] rs = size ? op2[3:0] : op2[2:0];

// Параллельный сдвиги
wire [32:0] _rol = {1'b0, ri, ri} << rs;
wire [32:0] _ror = {ri, ri, 1'b0} >> rs;
wire [32:0] _rcl = {1'b0, ri, flags[CF], ri[15:1]} << rs;
wire [32:0] _rcr = {ri[14:0], flags[CF], ri, 1'b0} >> rs;
wire [16:0] _shl = ri << op2[7:0];
wire [16:0] _shr = {ri, flags[CF]} >> op2[7:0];
wire [32:0] _sar = {{16{ri[15]}}, ri, 1'b0} >> op2[7:0];

// Результат сдвигов
wire [15:0] barr =
    alu == ROL ? (size ? _rol[31:16] : _rol[23:16]) :
    alu == RCL ? (size ? _rcl[31:16] : _rcl[23:16]) :
    alu == ROR ? (size ? _ror[16:1]  : _ror[16:9])  :
    alu == RCR ? (size ? _rcr[16:1]  : _rcr[16:9])  :
    alu == SHR ? (size ? _shr[16:1]  : _shr[16:9])  :
    alu == SAR ? (size ? _sar[16:1]  : _sar[16:9])  :
                 (size ? _shl[15:0]  : _shl[ 7:0]);  // SHL, SAL

wire rtfl = alu == SHL || alu == SHR || alu == SAL || alu == SHR;

// Флаг переполнения OF
wire rtof =
    alu == SHR ? barr[top] :
    alu == SAR ? 1'b0 : barr[top-1] ^ barr[top];

// Флаг переноса CF после выполнения сдвига
wire rtcf =
    alu == ROL ? _rol[32] : alu == RCL ? _rcl[32] :
    alu == ROR ? _ror[0]  : alu == RCR ? _rcr[0] :
    alu == SHL ? _shl[16] : alu == SHR ? _shr[0] :
    alu == SAR ? _sar[0]  : 1'b0;

// SZP флаги
wire rtsf = rtfl ? barr[top] : flags[SF];
wire rtzf = rtfl ? (size ? barr[15:0] : barr[7:0]) == 0 : flags[ZF];
wire rtpf = rtfl ?  ~^barr[7:0] : flags[PF];

wire [11:0] barf = {rtof, flags[10:8], rtsf, rtzf, 1'b0, flags[AF], 1'b0, rtpf, 1'b1, rtcf};

// -----------------------------------------------------------------------------
// Модуль деления
// -----------------------------------------------------------------------------

reg         divs;
reg  [31:0] diva, divb, divr;

// Запрошенный 32 или 16 битный
wire [31:0] divi  = size ? {dx, ax} : {ax, 16'h0000};

// ШАГ 1,2,3,4
wire [31:0] div1  = {divr [30:0], diva [31]};       // Сдвиг
wire [31:0] div2  = {div1r[30:0], div1a[31]};
wire [31:0] div3  = {div2r[30:0], div2a[31]};
wire [31:0] div4  = {div3r[30:0], div3a[31]};
wire [32:0] div1c = div1 - divb;                    // Сравнение после сдвига
wire [32:0] div2c = div2 - divb;
wire [32:0] div3c = div3 - divb;
wire [32:0] div4c = div4 - divb;
wire [31:0] div1r = div1c[32] ? div1 : div1c[31:0]; // Вычисление нового остатка
wire [31:0] div2r = div2c[32] ? div2 : div2c[31:0];
wire [31:0] div3r = div3c[32] ? div3 : div3c[31:0];
wire [31:0] div4r = div4c[32] ? div4 : div4c[31:0];
wire [31:0] div1a = {diva [30:0], ~div1c[32]};      // Заполнение результата
wire [31:0] div2a = {div1a[30:0], ~div2c[32]};
wire [31:0] div3a = {div2a[30:0], ~div3c[32]};
wire [31:0] div4a = {div3a[30:0], ~div4c[32]};
// -----------------------------------------------------------------------------
