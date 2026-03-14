// -----------------------------------------------------------------------------
// СЧИТЫВАНИЕ ОПЕРАНДОВ ИЗ РЕГИСТРОВ ИЛИ ИЗ ПАМЯТИ
// -----------------------------------------------------------------------------

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

            ea <= r20;

            // Эффективный 32-х битный адрес
            casex (i)
            8'b0x_xxx_100,
            8'b10_xxx_100: begin m1 <= 10; end          // SIB
            8'b00_xxx_101: begin ea <= 0; m1 <= 2;  end // A32
            // ---
            8'b01_xxx_101: begin m1 <= 1; if (!over) sgn <= ss; end
            8'b10_xxx_101: begin m1 <= 2; if (!over) sgn <= ss; end
            // ---
            8'b01_xxx_xxx: begin m1 <= 1; end                   // +D8
            8'b00_xxx_xxx: begin m1 <= 6; cp <= 1; `CPEN; end   // Читать сразу
            8'b10_xxx_xxx: begin m1 <= 2; end                   // +32
            8'b11_xxx_xxx: begin m1 <= 0; t <= RUN; end         // REG
            endcase

        end

    end

    // DISP:8
    1: begin m1 <= 6; eip <= eipn; ea <= ea + sign; `CPEN; end

    // DISP:16
    2: begin m1 <= 3; eip <= eipn; ea <= ea + {8'b0, i}; end
    3: begin m1 <= 4; eip <= eipn; ea <= ea + {i, 8'b0}; if (op67) begin m1 <= 6; `CPEN; end end

    // DISP:32
    4: begin m1 <= 5; eip <= eipn; ea <= ea + {i, 16'b0}; end
    5: begin m1 <= 6; eip <= eipn; ea <= ea + {i, 24'b0}; `CPEN; end

    // READ:8
    6: begin

        if (dir) op2 <= i; else op1 <= i;

        if (size) begin m1 <= 7; ea <= ean; end
        else      begin m1 <= 0; cp <= cpm; t <= RUN; end

    end

    // READ:16
    7: begin

        if (dir) op2[15:8] <= i; else op1[15:8] <= i;

        if (op66) begin m1 <= 0; cp <= cpm; t <= RUN; ea <= ea - 1; end
        else      begin m1 <= 8; ea <= ean; end

    end

    // READ:32
    8: begin

        if (dir) op2[23:16] <= i; else op1[23:16] <= i;

        m1 <= 9;
        ea <= ean;

    end
    9: begin

        if (dir) op2[31:24] <= i; else op1[31:24] <= i;

        t  <= RUN;
        m1 <= 0;
        ea <= ea - 3;
        cp <= cpm;

    end

    // SIB
    10: begin

        sib <= i;
        eip <= eipn;

        // Вычисление адреса, основанного на SIB
        ea  <= ({modrm[7:6], i[2:0]} == 5'b00_101 ? 32'b0 : r20) +  // BASE
               ((i[5:3] == 3'b100 ? 32'b0 : r53) << i[7:6]);        // SCALE*INDEX

        // Дочитать смещение
        case (modrm[7:6])
        2'b00: if (i[2:0] == 3'b101) m1 <= 2; else begin m1 <= 6; `CPEN; end
        2'b01: m1 <= 1;
        2'b10: m1 <= 2;
        endcase

        // Либо у базы, либо у индекса есть EBP/ESP
        if (!over) begin

            if (i[2:0] == 3'b101 && ^modrm[7:6]) sgn <= ss; // EBP+i
            if (i[2:0] == 3'b100) sgn <= ss; // ESP
            if (i[5:3] == 3'b101) sgn <= ss; // EBP*(1,2,4,8)

        end

    end

endcase

// -----------------------------------------------------------------------------
// [1T,2-3T] ЗАПИСЬ РЕЗУЛЬТАТОВ WB,DIR,SIZE,MODRM В ПАМЯТЬ/РЕГИСТРЫ
// -----------------------------------------------------------------------------

WB: case (m2)

    // a) Записать в регистры, если это явно указано
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
    // b) Записать в память младший байт wb
    else begin

        w  <= 1;
        m2 <= size ? 1 : 4;
        cp <= 1;
        o  <= wb[7:0];

    end

    // Старший байт нижнего слова
    1: begin

        w  <= 1;
        m2 <= op66 ? 4 : 2;
        ea <= ean;
        o  <= wb[15:8];

    end

    // Верхнее слово
    2: begin m2 <= 3; ea <= ean; w <= 1; o <= wb[23:16]; end
    3: begin m2 <= 4; ea <= ean; w <= 1; o <= wb[31:24]; end

    // Финализация
    4: begin m2 <= 0; cp <= 0;   t <= next; `TERM_FN; end

endcase
