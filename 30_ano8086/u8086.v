/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off CASEX */
/* verilator lint_off CASEOVERLAP */
/* verilator lint_off CASEINCOMPLETE */

module u8086
(
    // --- КОНТРОЛЬ
    input               clock,      // 25Мгц
    input               rst_n,      // =0 Сброс процессора
    input               ce,         // =1 Активация чипа
    input               intr,       // Запрос прерывания
    input       [ 3:0]  intv,       // Номер прерывания
    output              c0,         // Начало инструкции
    output              m0,         // Первый такт
    output reg          halt,       // Остановка процессора
    output reg          eoi,        // Конец инструкции
    // --- ШИНА
    output      [19:0]  a,          // Адрес в общей памяти
    input       [ 7:0]  i,          // Данные из памяти
    output reg  [ 7:0]  o,          // Данные в память
    output reg          w,          // Запись в память,
    // --- ПОРТЫ
    input       [ 7:0]  pi,         // Входящие данные из порта
    output reg          pr,         // Сигнал на чтение из порта
    output reg          pw,         // Сигнал на запись в порт
    // --- РЕГИСТРЫ
    output reg  [15:0]  ax,
    output reg  [15:0]  cx,
    output reg  [15:0]  dx,
    output reg  [15:0]  bx,
    output reg  [15:0]  sp,
    output reg  [15:0]  bp,
    output reg  [15:0]  si,
    output reg  [15:0]  di,
    // --- СЕГМЕНТЫ
    output reg  [15:0]  es,
    output reg  [15:0]  cs,
    output reg  [15:0]  ss,
    output reg  [15:0]  ds,
    // --- УПРАВЛЯЮЩИЕ
    output reg  [15:0]  ip,
    output reg  [11:0]  flags,
    // --- ДЕБАГ
    output reg  [ 7:0]  opcache,
    output reg  [ 3:0]  t,
    output reg  [ 3:0]  m,
    // --- ИНИЦИАЛИЗАЦИЯ
    input       [15:0]  _ax,
    input       [15:0]  _bx,
    input       [15:0]  _cx,
    input       [15:0]  _dx,
    input       [15:0]  _sp,
    input       [15:0]  _bp,
    input       [15:0]  _si,
    input       [15:0]  _di,
    input       [15:0]  _es,
    input       [15:0]  _cs,
    input       [15:0]  _ss,
    input       [15:0]  _ds,
    input       [15:0]  _ip,
    input       [11:0]  _flags
);

`include "u8086_decl.v"
`include "u8086_reg.v"
`include "u8086_wire.v"
`include "u8086_alu.v"

always @(posedge clock)
// Сброс процессора
if (rst_n == 0) begin

    t       <= RUN;              // Исполнение инструкции начинается сразу
    m       <= 0;
    cp      <= 0;                // Установить на CS:IP
    pw      <= 0;
    pr      <= 0;
    ea      <= 0;
    sgn     <= _ds;
    rep     <= 0;
    over    <= 0;
    halt    <= 0;
    eoi     <= 0;
    modrm   <= 0;
    w       <= 0;
    intrc   <= 0;

    // Копирование первоначальных значений при сбросе
    ax <= _ax; bx <= _bx; cx <= _cx; dx <= _dx;
    sp <= _sp; bp <= _bp; si <= _si; di <= _di;
    es <= _es; cs <= _cs; ss <= _ss; ds <= _ds;
    ip <= _ip; flags <= _flags;

end
// Запуск выполнения команд процессора
else if (ce) begin

    w  <= 0;
    pw <= 0;
    pr <= 0;

    // Защелкивание опкода на первом такте
    if (m0) begin

        next    <= RUN;
        ip      <= ip + 1;
        m       <= 1;
        m1      <= 0;
        m2      <= 0;
        m3      <= 0;
        m4      <= 0;
        cpm     <= 1;
        cpen    <= 1;
        eoi     <= 0;
        opcache <= i;
        dir     <= i[1];
        size    <= i[0];

        // Старт инструкции активирует SGN=DS по умолчанию
        if (c0) sgn <= ds;

    end

    // Вызов прерывания на начальном этапе считывания инструкции
    if (c0 && flags[IF] && intr != intrc) begin

        t  <= INTERRUPT;
        m  <= 0;
        ip <= ip;
        intrc <= intr;
        interrupt <= intv;

    end
    else
    case (t)

    // ------------------------------------------------------- ИСПОЛНЕНИЕ ------
    // ВЫПОЛНЕНИЕ ИНСТРУКЦИИ
    // -------------------------------------------------------------
    RUN: casex (opcode)

    8'b00xxx0xx: case (m) // ### ALU-операции с операндами ModRM [3T+]
    0: begin t <= MODRM; alu <= opcode[5:3]; end
    1: begin t <= alu == CMP ? RUN : WB; wb <= ar; flags <= af; `TERM end
    endcase

    8'b00xxx10x: case (m) // ### AL-операции AL/AX + imm [3/4T]
    0: begin alu <= opcode[5:3];        op1 <= i[0] ? ax : ax[7:0]; end
    1: begin ip <= ip + 1; m <= size?2:3;  op2 <= i; end
    2: begin ip <= ip + 1; m <= 3;         op2[15:8] <= i; end
    3: begin flags <= af; if (alu != CMP) ax <= size ? ar : {ax[15:8], ar[7:0]}; `TERM end
    endcase

    8'b000xx110: case (m) // ### PUSH es/cs/ss/ds [4T]
    0: begin t <= PUSH; case (i[4:3]) 0:wb<=es; 1:wb<=cs; 2:wb<=ss; 3:wb<=ds; endcase `TERM; end
    endcase

    8'b00001111: case (m) // ### ::Extended::
    0: begin end
    endcase

    8'b000xx111: case (m) // ### POP es/../ss/ds [5T]
    0: begin t <= POP; end
    1: begin case (opcode[4:3]) 0:es<=wb; 2:ss<=wb; 3:ds<=wb; endcase `TERM; end
    endcase

    8'b001xx110: case (m) // ### Префикс es/cs/ss/ds: [1T]
    0: begin over <= 1; case (i[4:3]) 0:sgn<=es; 1:sgn<=cs; 2:sgn<=ss; 3:sgn<=ds; endcase m <= 0; end
    endcase

    8'b0010x111: case (m) // ### Десятичная коррекция [1T]
    0: begin ax[7:0] <= daa; flags <= daa_f; `TERM; end
    endcase

    8'b0011x111: case (m) // ### ASCII коррекция [1T]
    0: begin ax <= {aaa_b, ax[7:4], aaa_a}; {flags[AF], flags[CF]} <= {daa_a, daa_a}; `TERM; end
    endcase

    8'b0100xxxx: case (m) // ### INC/DEC r16 [4T]
    0: begin ip <= ip;      alu <= opcode[3] ? SUB : ADD; {dir, size} <= 2'b11; end
    1: begin ip <= ip + 1;  op1 <= i20; op2 <= 1; m <= 2; end
    2: begin wb <= ar; `REG <= opcode[2:0]; t <= WB; flags <= {af[11:1], flags[CF]}; `TERM; end
    endcase

    8'b01010xxx: case (m) // ### PUSH r16 [5T]
    0: begin ip <= ip;      size <= 1'b1; end
    1: begin ip <= ip + 1;  wb   <= (i[2:0] == 4 ? sp-2 : i20); t <= PUSH; `TERM; end
    endcase

    8'b01011xxx: case (m) // ### POP r16 [6T]
    0: begin t <= POP; {size, dir} <= 2'b11; end
    1: begin t <= WB; `REG <= opcode[2:0]; `TERM; end
    endcase

    8'b01100000: case (m) // ### PUSHA [18T]
    0: begin ea <= sp; sgn <= ss; cp <= 1; end
    1: begin

        w   <= 1;
        m1  <= m1 + 1;
        ea  <= ea - 1;

        if (m1 == 15) begin m <= 2; m1 <= 0; end

        case (m1)
        0:  o <= ax[15:8];  1: o <= ax[7:0];
        2:  o <= cx[15:8];  3: o <= cx[7:0];
        4:  o <= dx[15:8];  5: o <= dx[7:0];
        6:  o <= bx[15:8];  7: o <= bx[7:0];
        8:  o <= sp[15:8];  9: o <= sp[7:0];
        10: o <= bp[15:8]; 11: o <= bp[7:0];
        12: o <= si[15:8]; 13: o <= si[7:0];
        14: o <= di[15:8]; 15: o <= di[7:0];
        endcase

    end
    2: begin cp <= 0; sp <= sp - 16; `TERM; end
    endcase

    8'b01100001: case (m) // ### POPA [18T]
    0: begin ea <= sp; sgn <= ss; cp <= 1; end
    1: begin

        m1  <= m1 + 1;
        ea  <= ea + 1;

        if (m1 == 15) begin m <= 2; m1 <= 0; end

        case (m1)
        0:  di[ 7:0] <= i;  1: di[15:8] <= i;
        2:  si[ 7:0] <= i;  3: si[15:8] <= i;
        4:  bp[ 7:0] <= i;  5: bp[15:8] <= i;
        6:  sp[ 7:0] <= i;  7: sp[15:8] <= i;
        8:  bx[ 7:0] <= i;  9: bx[15:8] <= i;
        10: dx[ 7:0] <= i; 11: dx[15:8] <= i;
        12: cx[ 7:0] <= i; 13: cx[15:8] <= i;
        14: ax[ 7:0] <= i; 15: ax[15:8] <= i;
        endcase

    end
    2: begin cp <= 0; sp <= ea; `TERM; end
    endcase

    8'b0110010x: case (m) // ### FS: GS: [1T]
    0: begin m <= 0; over <= 1; sgn <= i[0] ? GS : FS; end
    endcase

    8'b011010x0: case (m) // ### PUSH s8/u16 [5/6T]
    1: begin ip <= ip + 1; wb <= o1 ? sign : i; if (op1) begin t <= PUSH; `TERM; end else m <= 2; end
    2: begin ip <= ip + 1; wb[15:8] <= i; t <= PUSH; `TERM; end
    endcase

    8'b011010x1: case (m) // ### IMUL rm16,rm,imm [7T+]
    0: begin {dir, size} <= 2'b11; t <= MODRM; end
    1: begin cp  <= 0;       m <= 2;  end
    2: begin op1 <= sign;    m <= 3 + o1; ip <= ip + 1; end
    3: begin op1[15:8] <= i; m <= 4;      ip <= ip + 1; end
    4: begin wb <= imul_r[15:0]; {flags[CF], flags[OF], flags[ZF]} <= {imul_o, imul_o, imul_z}; t <= WB; `TERM; end
    endcase

    8'b0111xxxx: case (m) // ### JCC short [1/2T]

        0: if (branch[i[3:1]] == i[0]) begin ip <= ip + 2; `TERM; end
        1: begin ip <= ip + 1 + sign; `TERM; end

    endcase

    8'b100000xx: case (m) // ### ALU GROUP [5*T]

        0: begin t <= MODRM; dir <= 0; cpm <= 0; end
        1: begin

            ip  <= ip + 1;
            alu <= `REG;
            op2 <= opcode[1:0] == 3 ? sign : i;
            m   <= opcode[1:0] == 1 ? 2 : 3;

        end
        2: begin m <= 3; op2[15:8] <= i; ip <= ip + 1; end
        3: begin t <= (alu == CMP ? RUN : WB); wb <= ar; flags <= af; `TERM; end

    endcase

    8'b1000010x: case (m) // ### TEST rm, r [3T+]

        0: begin t <= MODRM; alu <= AND; end
        1: begin flags <= af; `TERM; end

    endcase

    8'b1000011x: case (m) // ### XCHG r,rm [6*T]

        0: begin t <= MODRM; end
        1: begin t <= WB; wb <= op2; m <= 2; end
        2: begin t <= WB; wb <= op1; dir <= 0; `TERM; end

    endcase

    8'b100010xx: case (m) // ### MOV rm,r|r,rm [4*T]

        0: begin t <= MODRM; cpen <= i[1]; end
        1: begin t <= WB; wb <= op2; cp <= 1; `TERM; end

    endcase

    8'b10001100: case (m) // ### MOV rm, sreg

        0: begin t <= MODRM; cpen <= 0; {dir, size} <= 2'b01; end
        1: begin t <= WB; case (`REG) 0: wb <= es; 1: wb <= cs; 2: wb <= ss; 3: wb <= ds; endcase cp <= 0; `TERM; end

    endcase

    8'b10001101: case (m) // ### LEA r, rm [4T+]

        0: begin t <= MODRM; cpen <= 0; {dir, size} <= 2'b11; end
        1: begin t <= WB; wb <= ea; `TERM; end

    endcase

    8'b10001110: case (m) // ### MOV sreg, rm

        0: begin t <= MODRM; {dir, size} <= 2'b11; end
        1: begin case (`REG) 0: es <= op2; 2: ss <= op2; 3: ds <= op2; endcase cp <= 0; `TERM; end

    endcase

    8'b10001111: case (m) // ### POP rm

        0: begin t <= POP;   end
        1: begin t <= MODRM; m <= 2; cpen <= 0; dir <= 0; end
        2: begin t <= WB; cp <= 1; `TERM; end

    endcase

    8'b10010000,          // ### FWAIT
    8'b11110000,          // ### LOCK:
    8'b10011011: case (m) // ### NOP [1T]

        0: begin `TERM; end

    endcase

    8'b10010xxx: case (m) // ### 2T XCHG ax, r [2T]

        0: begin

            ax   <= r16;
            wb   <= ax;
            t    <= WB;
            `W16 <= opcode[2:0];
            `TERM;

        end

    endcase

    8'b10011000: case (m) // ### CBW

        0: begin ax <= {{8{ax[7]}}, ax[7:0]}; `TERM; end

    endcase

    8'b10011001: case (m) // ### CWD

        0: begin dx <= {16{ax[15]}}; `TERM; end

    endcase

    8'b10011010: case (m) // ### CALL FAR [13T]

        0: begin next <= RUN; end
        1: begin m <= 2; ip <= ip + 1; op1[ 7:0] <= i; end
        2: begin m <= 3; ip <= ip + 1; op1[15:8] <= i; end
        3: begin m <= 4; ip <= ip + 1; op2[ 7:0] <= i; end
        4: begin m <= 5; ip <= ip + 1; op2[15:8] <= i; t <= PUSH; wb <= cs; end
        5: begin m <= 6; wb <= ip;  t  <= PUSH; end
        6: begin `TERM;  ip <= op1; cs <= op2; end

    endcase

    8'b10011100: case (m) // ### PUSHF [4T]

        0: begin t <= PUSH; wb <= {4'hF, flags}; `TERM; end

    endcase

    8'b10011101: case (m) // ### POPF [5T]

        0: begin t <= POP; end
        1: begin flags <= (wb & 12'hFD7) | 2; `TERM; end

    endcase

    8'b10011110: case (m) // ### SAHF

        0: begin flags[7:0] <= (ax[15:8] & 8'hD7) | 2; `TERM; end

    endcase

    8'b10011111: case (m) // ### LAHF

        0: begin ax[15:8]  <= flags[7:0] | 2; `TERM; end

    endcase

    8'b101000xx: case (m) // ### MOV a,[m] | [m],a

        // Прочесть адрес
        1: begin ea[ 7:0] <= i; ip <= ip + 1; m <= 2; end
        2: begin ea[15:8] <= i; ip <= ip + 1; m <= dir ? 3 : 6; cp <= 1; end

        // Запись A в память
        3: begin w <= 1; o <= ax[ 7:0]; m <= size ? 4 : 5; end
        4: begin w <= 1; o <= ax[15:8]; m <= 5; ea <= ea + 1; end
        5: begin `TERM; cp <= 0; end

        // Чтение A из памяти
        6: begin m <= 7; ax[ 7:0] <= i; ea <= ea + 1; if (!size) begin `TERM; cp <= 0; end end
        7: begin `TERM;  ax[15:8] <= i; cp <= 0; end

    endcase

    8'b1010100x: case (m) // ### TEST a, i [4*T]

        0: begin alu <= AND; op1 <= opcode[0] ? ax : ax[7:0]; end
        1: begin m   <= size ? 2 : 3; op2       <= i; ip <= ip + 1; end
        2: begin m   <= 3;            op2[15:8] <= i; ip <= ip + 1; end
        3: begin flags <= af; `TERM; end

    endcase

    8'b1010010x: case (m) // ### MOVSx [2*+4/2*CX]

        1: begin

            m   <= 2;
            cp  <= repa;
            op1 <= sgn;
            ea  <= si;

            if (!repa) begin `TERM; end

        end

        // Запись младшего байта [size=0]
        2: begin

            m   <= size ? 3 : 5;
            wb  <= i;
            o   <= i;

            if (size)  ea <= ea + 1;
            else begin ea <= di; sgn <= es; w <= 1; end

        end

        // Чтение старшего байта, запись младшего байта [size=1]
        3: begin

            m   <= 4;
            wb  <= i;
            w   <= 1;
            ea  <= di;
            o   <= wb[7:0];
            sgn <= es;

        end

        // Запись старшего байта
        4: begin t <= 5; ea <= ea + 1; w <= 1; o <= wb[7:0]; end

        // Инкремент или декремент SI/DI, выключение записи
        5: begin

            t   <= 2;
            sgn <= op1;
            ea  <= sinc;
            si  <= sinc;
            di  <= dinc;
            cx  <= cx - rep[1];

            if (!repb) begin `TERM; cp <= 0; end

        end

    endcase

    8'b1010011x: case (m) // ### CMPSx :: (3|5)*CX+2*

        1: begin

            m   <= 2;
            cp  <= repa;
            ea  <= si;
            alu <= SUB;

            if (!repa) begin `TERM; end

        end

        // Чтение DS:SI
        2: begin

            t16 <= sgn;
            t   <= size ? 3 : 5;
            ea  <= size ? ea + 1 : di;
            sgn <= size ? sgn : es;
            op1 <= i;

        end

        // Старший байт из SI+1
        3: begin m <= 4; op1[15:8] <= i; sgn <= es; ea <= di; end

        // Чтение из ES:DI
        4: begin m <= size ? 5 : 6; op2 <= i; ea <= ea + 1; end
        5: begin m <= 6; op2[15:8] <= i; end

        // Сравнение и повтор цикла (если необходимо)
        6: begin

            m       <= 2;
            ea      <= sinc;
            si      <= sinc;
            di      <= dinc;
            flags   <= af;
            sgn     <= t16;
            cx      <= cx - rep[1];

            if (!(repb && (rep[0] == af[ZF]))) begin `TERM; cp <= 0; end

        end

    endcase

    8'b1010101x: case (m) // ### STOSx :: 3+(2/1)*CX

        1: begin m <= 2; cp <= repa; if (!repa) begin `TERM; end end
        2: begin // STOSB

            m   <= size ? 3 : 2;
            o   <= ax[7:0];
            sgn <= es;
            ea  <= di;
            w   <= 1;
            di  <= flags[DF] ? di - 1 : di + 1;

            if (!size) begin cx <= cx - rep[1]; if (!repb) t <= 4; end

        end
        3: begin // STOSW

            m   <= repb ? 2 : 4;
            w   <= 1;
            ea  <= ea + 1;
            o   <= ax[15:8];
            di  <= flags[DF] ? di - 1 : di + 1;
            cx  <= cx - rep[1];

        end

        4: begin `TERM; cp <= 0; end

    endcase

    8'b1010110x: case (m) // ### LODSx :: 2*

        0: begin

            m  <= 1;
            cp <= repa;
            ea <= flags[DF] ? si - repc : si + repc;

            if (!repa) begin `TERM; end

        end

        1: begin

            m       <= 2;
            ea      <= ea + 1;
            si      <= flags[DF] ? ea-1-size : ea+1+size;
            ax[7:0] <= i;

            if (!size) begin `TERM; cp <= 0; end

        end

        2: begin ax[15:8] <= i; `TERM; cp <= 0; end

    endcase

    8'b1010111x: case (m) // ### SCASx :: 2*+(2|3)*CX

        1: begin

            m   <= 2;
            cp  <= repa;
            ea  <= di;
            alu <= SUB;
            sgn <= es;

            if (!repa) begin `TERM; end

        end

        // Прочитать младший байт
        2: begin

            t   <= size ? 3 : 4;
            op1 <= size ? ax : ax[7:0];
            op2 <= i;
            ea  <= ea + 1;

        end

        // Прочитать старший байт
        3: begin m <= 4; op2[15:8] <= i; di <= dinc; end

        // Сравнить A со значением из памяти
        4: begin

            t       <= 2;
            flags   <= af;
            di      <= dinc;
            ea      <= dinc;
            cx      <= cx - rep[1];

            if (!(repb && (rep[0] == af[ZF]))) begin `TERM; cp <= 0; end

        end

    endcase

    8'b1011xxxx: case (m) // ### MOV r,i [3*T]

        1: begin ip <= ip + 1; wb <= i; m <= 2; if (!opcode[3]) begin t <= WB; `W8 <= opcode[2:0]; `TERM; end end
        2: begin ip <= ip + 1; wb[15:8] <= i; t <= WB; `W16 <= opcode[2:0]; `TERM; end

    endcase

    8'b1100000x: case (m) // ### [ROT] rm, i

        0: begin t <= MODRM; dir <= 0; cpm <= 0; end
        1: begin m <= 2; op2 <= i; ip <= ip + 1; alu <= modrm[5:3]; end
        2: begin t <= WB; wb <= barr; flags <= barf; `TERM; end

    endcase

    8'b1100001x: case (m) // ### RET;RET imm [5/7T]

        0: begin t <= POP; m <= opcode[0] ? 3 : 1; t16 <= 0; end
        1: begin m <= 2; t16[ 7:0] <= i; ip <= ip + 1; end
        2: begin m <= 3; t16[15:8] <= i; end
        3: begin ip <= wb; sp <= sp + t16; `TERM; end

    endcase

    8'b1100010x: case (m) // ### LES|LDS r,m

        0: begin t <= MODRM; {dir, size} <= 2'b11; end
        1: begin m <= 2; ea <= ea + 2; end
        2: begin m <= 3; ea <= ea + 1; wb[7:0] <= i; end
        3: begin t <= WB; wb <= op2; if (opcode[0]) ds <= {i, wb[7:0]}; else es <= {i, wb[7:0]}; `TERM; end

    endcase

    8'b1100011x: case (m) // ### MOV rm, i

        0: begin t <= MODRM; {cpm, cpen, dir} <= 0; end
        1: begin wb <= i; ip <= ip + 1; if (size) m <= 2; else begin t <= WB; `TERM; end end
        2: begin wb[15:8] <= i; ip <= ip + 1; t <= WB; `TERM; end

    endcase

    8'b1100101x: case (m) // ### RETF; RETF i16

        0: begin t <= POP; end
        1: begin t <= POP; m  <= 2;  op1 <= wb;  op2 <= i; ip <= ip + 1; end
        2: begin `TERM;    cs <= wb; ip  <= op1; if (!opcode[0]) sp <= sp + {i, op2[7:0]}; end

    endcase

    8'b110011x0: case (m) // ### INT 3; INTO

        0: begin

            t <= (i[1] && flags[OF]) || !i[1] ? INTERRUPT : RUN;
            interrupt <= i[1] ? 4 : 3;
            `TERM;

        end

    endcase

    8'b11001101: case (m) // ### INT i

        1: begin t <= INTERRUPT; interrupt <= i; ip <= ip + 1; `TERM; end

    endcase

    8'b11001111: case (m) // ### IRET

        0: begin t <= POP; end
        1: begin t <= POP; m <= 2; ip <= wb; end
        2: begin t <= POP; m <= 3; cs <= wb; end
        3: begin `TERM; flags <= (wb[11:0] & 12'hFD7) | 2; end

    endcase

    8'b110100xx: case (m) // ### [ROT] rm, (1|cl)

        0: begin t <= MODRM; dir <= 0; end
        1: begin m <= 2; alu <= modrm[5:3]; op2 <= opcode[1] ? cx[7:0] : 1; end
        2: begin t <= WB; wb <= barr; flags <= barf; `TERM; end

    endcase

    8'b11010110: case (m) // ### SALC 1T

        0: begin ax[7:0] <= {8{flags[CF]}}; `TERM; end

    endcase

    8'b11010111: case (m) // ### XLATB

        0: begin ea <= bx; cp <= 1; end
        1: begin ax[7:0] <= i; cp <= 0; `TERM; end

    endcase

    8'b11011xxx: case (m) // ### FPU

        0: begin t <= MODRM; {cpen, dir, size, cpm} <= 4'b0; `TERM; end

    endcase

    8'b1110000x,
    8'b11100010: case (m) // ### LOOPN?Z

        0: begin

            cx <= cx - 1;
            if (cx == 1 || (!i[1] && flags[ZF] ^ i[0])) begin ip <= ip + 2; `TERM; end

        end
        1: begin ip <= ip + 1 + sign; `TERM; end

    endcase

    8'b11100011: case (m) // ### JCXZ x

        0: begin if (cx) begin ip <= ip + 2; `TERM; end end
        1: begin ip <= ip + 1 + sign; `TERM; end

    endcase

    8'b1110x10x: case (m) // ### IN a,p 3/4T*

        0: begin m <= i[3] ? 2 : 1;  sgn <= 0; ea <= dx; {cp, pr} <= {i[3], i[3]}; end
        1: begin m <= 2; pr <= 1;    cp <= 1;    ea <= i; ip <= ip + 1; end
        2: begin m <= 3; pr <= size; cp <= size; ea <= ea + 1; end
        3: begin m <= 4; ax[7:0] <= pi; if (!size) begin cp <= 0; `TERM; end end
        4: begin ax[15:8] <= pi; cp <= 0; `TERM; end

    endcase

    8'b1110x11x: case (m) // ### OUT p,a 2/3T

        0: begin sgn <= 0; end
        1: begin

            m  <= size ? 2 : 3;
            cp <= 1;
            pw <= 1;
            o  <= ax[7:0];
            ea <= opcode[3] ? dx : i;
            ip <= opcode[3] ? ip : ip + 1;

        end
        2: begin

            m  <= 3;
            ea <= ea + 1;
            o  <= ax[15:8];
            pw <= 1;

        end

        3: begin cp <= 0; `TERM; end

    endcase

    8'b11101000: case (m) // ### CALL b16 6T

        1: begin m <= 2;    ip <= ip + 1; ea <= i; end
        2: begin t <= PUSH; wb <= ip + 1; ip <= ip + 1 + {i, ea[7:0]}; `TERM; end

    endcase

    8'b11101001: case (m) // ### JMP o16 3T

        1: begin ea <= i; ip <= ip + 1; m <= 2; end
        2: begin ip <= ip + 1 + {i, ea[7:0]}; `TERM; end

    endcase

    8'b11101010: case (m) // ### JMP far 5T

        // Прочитаьть 4 байта для нового CS:IP
        1: begin ip <= ip + 1; m <= 2; ea       <= i; end
        2: begin ip <= ip + 1; m <= 3; ea[15:8] <= i; end
        3: begin ip <= ip + 1; m <= 4; op1      <= i; end
        4: begin ip <= ea;     cs <= {i, op1[7:0]}; `TERM; end

    endcase

    8'b11101011: case (m) // ### JMP b 2T

        1: begin ip <= ip + sign + 1; `TERM; end

    endcase

    8'b11110001: case (m) // ### INT 1

        0: begin t <= INTERRUPT; interrupt <= 1; `TERM; end

    endcase

    8'b1111001x: case (m) // ### REPNZ, REPZ

        0: begin m <= 0; rep <= i[1:0]; end

    endcase

    8'b11110100: case (m) // ### 1T HLT -- Остановка процессора

        0: begin ip <= ip; halt <= 1; `TERM; end

    endcase

    8'b11110101: case (m) // ### CMC

        0: begin flags[CF] <= ~flags[CF]; `TERM; end

    endcase

    8'b1111100x: case (m) // ### CLC, STC

        0: begin flags[CF] <= i[0]; `TERM; end

    endcase

    8'b1111101x: case (m) // ### CLI, STI

        0: begin flags[IF] <= i[0]; `TERM; end

    endcase

    8'b1111110x: case (m) // ### CLD, STD

        0: begin flags[DF] <= i[0]; `TERM; end

    endcase

    8'b1111011x: case (m) // ### GROUP #3 rm, op [F6-F7]

        // Запрос операндов
        0: begin t <= MODRM; cpm <= 0; dir <= 1'b0; end

        // Исполнение инструкции
        default: case (`REG)

            // 5T+ TEST imm8/16
            0, 1: case (m)

                1: begin m  <= 2; alu <= AND; end
                2: begin ip <= ip + 1; op2[15:0] <= i; m <= size ? 3 : 4; end
                3: begin ip <= ip + 1; op2[15:8] <= i; m <= 4; end
                4: begin flags <= af; `TERM; end

            endcase

            // 4T+ NOT rm
            2: begin wb <= ~op1; t <= WB; `TERM; end

            // 5T+ NEG rm
            3: case (m)

                1: begin m <= 2; alu <= SUB; op2 <= op1; op1 <= 0; end
                2: begin t <= WB; wb <= ar; flags <= af; `TERM; end

            endcase

            // 4T+ MUL, IMUL rm [IMUL знакорасширяется op1/op2]
            4, 5: case (m)

                1: begin

                    m       <= 2;
                    op1     <= size ? op1 : {modrm[3] ? {8{op1[7]}} : 8'h00, op1[7:0]};
                    op2     <= size ? ax  : {modrm[3] ? {8{ ax[7]}} : 8'h00,  ax[7:0]};
                    imulw   <= modrm[3];

                end
                2: begin

                    if (size) {dx, ax} <= imul_r[31:0]; else ax <= imul_r[15:0];

                    flags[ZF] <= imul_z;
                    flags[CF] <= imul_o;
                    flags[OF] <= imul_o;

                    `TERM;

                end

            endcase

            // DIV [op1, op2] Беззнаковое деление
            // IDIV Деление со знаком
            6, 7: case (m)

                // Запрос
                1: begin

                    m    <= 2;
                    t    <= DIV;
                    divr <= 0;
                    op1  <= size ? 8 : 4;

                    if (modrm[3]) begin

                        divs <= divi[31] ^ op1[size ? 15 : 7];
                        diva <= divi[31] ? -divi : divi;
                        divb <= size ? (op1[15] ? -op1 : op1) : (op1[7] ? -op1[7:0] : op1[7:0]);

                    end else begin

                        divs <= 0;
                        diva <= divi;
                        divb <= op1;

                    end

                end

                // Результат
                2: begin

                    // #0 Overflow если в старшем слове или байте есть ненулевое значение
                    t <= (size ? diva[31:16] : diva[15:8]) ? INTERRUPT : RUN;
                    interrupt <= 0;

                    // Результат DIV или IDIV
                    if (size) {dx, ax} <= {sign ? -divr[15:0] : divr[15:0], sign ? -diva[15:0] : diva[15:0]};
                    else      ax       <= {sign ? -divr[ 7:0] : divr[ 7:0], sign ? -diva[ 7:0] : diva[ 7:0]};

                    `TERM;

                end

            endcase

        endcase

    endcase

    8'b1111111x: case (m) // ### GROUP #4 rm, op [FE-FF]

        // Запрос операндов
        0: begin t <= MODRM; cpm <= 0; dir <= 1'b0; end

        // Исполнение инструкции
        default: case (`REG)

            // 5T+ INC|DEC rm
            0, 1: case (m)

                1: begin m <= 2; op2 <= 1; alu <= modrm[3] ? SUB : ADD; end
                2: begin t <= WB; wb <= ar; flags <= af; `TERM; end

            endcase

            // CALL rm
            2: begin ip <= op1; wb <= ip; t <= size ? PUSH : UNDEF; `TERM; end

            // CALL far rm
            3: case (m)

                1: begin m <= 2; ea <= ea + 2; ip <= op1; op1 <= ip; op2 <= cs; if (!size) t <= UNDEF; end
                2: begin m <= 3; ea <= ea + 1; wb <= i; end
                3: begin m <= 4; wb <= op2; t <= PUSH; cs <= {i, wb[7:0]}; end
                4: begin `TERM;  wb <= op1; t <= PUSH; end

            endcase

            // 3T+ JMP rm
            4: begin ip <= op1; `TERM; if (size == 0) t <= UNDEF; end

            // 7T+ JMP far rm
            5: case (m)

                1: begin m <= 2; ea <= ea + 2; ip <= op1; if (size == 0) t <= UNDEF; end
                2: begin m <= 3; ea <= ea + 1; wb <= i; end
                3: begin cs <= {i, wb[7:0]}; `TERM; end

            endcase

            // PUSH rm
            6: begin t <= PUSH; wb <= op1; `TERM; end
            7: begin t <= UNDEF; end

        endcase

    endcase

    default: ip <= ip;    // $$$ НЕИЗВЕСТНАЯ ИНСТРУКЦИЯ
    endcase

    // ------------------------------------------------------- ЧИТАТЬ ОПЕРАНДЫ -
    // СЧИТЫВАНИЕ ОПЕРАНДОВ ИЗ РЕГИСТРОВ ИЛИ ИЗ ПАМЯТИ
    // -------------------------------------------------------------
    MODRM: case (m1)

        0: begin

            modrm   <= i;
            ip      <= ip + 1;

            // Читать регистры
            op1     <= dir ? i53 : i20;
            op2     <= dir ? i20 : i53;

            // Вычисление эффективного адреса
            case (i[2:0])
            3'b000: ea <= bx + si;
            3'b001: ea <= bx + di;
            3'b010: ea <= bp + si;
            3'b011: ea <= bp + di;
            3'b100: ea <= si;
            3'b101: ea <= di;
            3'b110: ea <= i[7:6] ? bp : 0;
            3'b111: ea <= bx;
            endcase

            // Роутинг
            casex (i)
            8'b00_xxx_110: begin m1 <= 2; end // DISP16
            8'b00_xxx_xxx: begin m1 <= 4; `CPEN; end // Читать операнд
            8'b01_xxx_xxx: begin m1 <= 1; end // DISP8
            8'b10_xxx_xxx: begin m1 <= 2; end // DISP16
            8'b11_xxx_xxx: begin m1 <= 0; t <= RUN; end // Регистры. Вернуться к RUN
            endcase

            // Проставить сегмент SS: там где есть упоминания BP
            if (!over && ((^i[7:6] && i[2:0] == 3'b110) || i[2:1] == 2'b01)) sgn <= ss;

        end

        // DISP8/16
        1: begin m1 <= 4; ip <= ip + 1; ea <= ea + sign;       `CPEN; end
        2: begin m1 <= 3; ip <= ip + 1; ea <= ea + {8'h00, i}; end
        3: begin m1 <= 4; ip <= ip + 1; ea <= ea + {i, 8'h00}; `CPEN; end

        // Читать 8-битный операнд
        4: begin

            if (dir) op2 <= i; else op1 <= i;
            if (size) begin m1 <= 5; ea <= ea + 1; end else begin m1 <= 0; cp <= cpm; t <= RUN; end

        end

        // Читать 16-битный операнд
        5: begin

            if (dir) op2[15:8] <= i; else op1[15:8] <= i;

            t  <= RUN;
            m1 <= 0;
            cp <= cpm;
            ea <= ea - 1;

        end

    endcase

    // ------------------------------------------------------- ЗАПИСЬ РЕЗУЛЬТАТА
    // [1T,2-3T] ЗАПИСЬ РЕЗУЛЬТАТОВ WB,DIR,SIZE,MODRM В ПАМЯТЬ/РЕГИСТРЫ
    // -------------------------------------------------------------
    WB: case (m2)

        // Записать в регистры, если это явно указано
        0: if (dir || modrm[7:6] == 2'b11) begin

            case (dir ? modrm[5:3] : modrm[2:0])
            0: if (size) ax <= wb; else ax[ 7:0] <= wb[7:0];
            1: if (size) cx <= wb; else cx[ 7:0] <= wb[7:0];
            2: if (size) dx <= wb; else dx[ 7:0] <= wb[7:0];
            3: if (size) bx <= wb; else bx[ 7:0] <= wb[7:0];
            4: if (size) sp <= wb; else ax[15:8] <= wb[7:0];
            5: if (size) bp <= wb; else cx[15:8] <= wb[7:0];
            6: if (size) si <= wb; else dx[15:8] <= wb[7:0];
            7: if (size) di <= wb; else bx[15:8] <= wb[7:0];
            endcase

            t  <= next;
            cp <= 0;

        // Либо в память (1 или 2 байта)
        end else begin

            w  <= 1;
            cp <= 1;
            m2 <= 1;
            o  <= wb[7:0];

        end

        // Запись в память, 2 байта
        1: begin

            w  <= size;
            cp <= size;
            m2 <= size;
            t  <= size ? WB : next;
            ea <= ea + 1;
            o  <= wb[15:8];
            size <= 0;

        end

    endcase

    // ------------------------------------------------------- ЗАПИСЬ В СТЕК ---
    // [3T] ВЫГРУЗКА WB -> В СТЕК
    // -------------------------------------------------------------
    PUSH: case (m3)
    0: begin m3 <= 1; ea <= sp - 2; w <= 1; o <= wb[ 7:0]; cp <= 1; sgn <= ss; sp <= sp - 2; end
    1: begin m3 <= 2; ea <= ea + 1; w <= 1; o <= wb[15:8]; end
    2: begin m3 <= 0; cp <= 0; t <= next; sgn <= ds; end
    endcase

    // ------------------------------------------------------- ЧТЕНИЕ ИЗ СТЕКА -
    // [3T] ЗАГРУЗКА ИЗ СТЕКА -> WB
    // -------------------------------------------------------------
    POP: case (m3)
    0: begin m3 <= 1; cp <= 1; ea <= sp; sp <= sp + 2; sgn <= ss; cp <= 1; end
    1: begin m3 <= 2; wb <= i; ea <= ea + 1; end
    2: begin m3 <= 0; wb[15:8] <= i; cp <= 0; t <= next; sgn <= ds; end
    endcase

    // ------------------------------------------------------- ПРЕРЫВАНИЕ ------
    // Прерывание interrupt; считается за выполнение инструкции
    // -------------------------------------------------------------
    INTERRUPT: case (m4)
    0: begin m4 <= 1; t <= PUSH; wb <= {4'hF, flags}; next <= INTERRUPT; end
    1: begin m4 <= 2; t <= PUSH; wb <= cs; end
    2: begin m4 <= 3; t <= PUSH; wb <= ip; end
    3: begin m4 <= 4; ea <= {interrupt, 2'b00}; sgn <= 0; cp <= 1; end
    4: begin m4 <= 5; ip[ 7:0] <= i; ea <= ea + 1; end
    5: begin m4 <= 6; ip[15:8] <= i; ea <= ea + 1; end
    6: begin m4 <= 7; cs[ 7:0] <= i; ea <= ea + 1; end
    7: begin m4 <= 0; cs[15:8] <= i; cp <= 0; t <= RUN; flags[IF] <= 1'b0; sgn <= ds; end
    endcase

    // ------------------------------------------------------- ДЕЛЕНИЕ ---------
    // Деление diva на divb; повторять op1 раз (количество сдвигов)
    // divr = 0 на старте и является остатком; diva это результат
    // -------------------------------------------------------------
    DIV: begin

        {divr, diva} <= {div4r, div4a};
        t   <= op1 != 1 ? DIV : RUN;
        op1 <= op1 - 1;

    end

    endcase

end

endmodule
