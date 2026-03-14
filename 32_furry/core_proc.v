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
