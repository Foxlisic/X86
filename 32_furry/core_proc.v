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

endcase

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
