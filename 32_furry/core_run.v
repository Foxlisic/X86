// ИСПОЛНЕНИЕ ИНСТРУКЦИИ
RUN: casex ({ext,opcode})

    // --- ПРЕФИКСЫ ---

    // ### Префикс ES/CS/SS/DS [1T]
    8'b00100110: begin m <= 0; over <= 1; sgn <= es; end
    8'b00101110: begin m <= 0; over <= 1; sgn <= cs; end
    8'b00110110: begin m <= 0; over <= 1; sgn <= ss; end
    8'b00111110: begin m <= 0; over <= 1; sgn <= ds; end

    // ### Opsize, Adsize
    8'b01100110: begin m <= 0; op66 <= ~op66; end
    8'b01100111: begin m <= 0; op67 <= ~op67; end

    // ### Расширение опкода
    8'b00001111: begin m <= 0; ext <= 1; end

    // ### REPNZ, REPZ [1T]
    8'b1111001x: begin m <= 0; rep <= i[1:0]; end

    // --- ИНСТРУКЦИИ ---

    // ### ALU-операции с операндами ModRM [3T+]
    8'b00xxx0xx: case (m)

        0: begin t <= MODRM; end
        1: begin

            m     <= 0;
            t     <= alu == CMP ? RUN : WB;
            wb    <= ar;
            flags <= af;

            if (alu == CMP) `TERM;

        end

    endcase

    // ### ALU-операции с регистром Acc и Immediate [3T+]
    8'b00xxx10x: case (m)

        0: begin dir <= 1; op1 <= eax; end
        1: begin eip <= eipn; op2        <= i; m <= size ? 2 : 5; end
        2: begin eip <= eipn; op2[15:8]  <= i; m <= op66 ? 5 : 3; end
        3: begin eip <= eipn; op2[23:16] <= i; m <= 4; end
        4: begin eip <= eipn; op2[31:24] <= i; m <= 5; end
        5: begin

            flags <= af;
            if (alu != CMP) eax <= size ? (op66 ? {eax[31:16], ar[15:0]} : ar[31:0]) : {eax[31:8], ar[7:0]};
            `TERM;

        end

    endcase

    // ### PUSH sreg
    8'b000xx110: begin

        t    <= PUSH;
        m    <= 0;
        op66 <= 1;
        wb   <= i[4:3] == 2'b00 ? es : i[4:3] == 2'b01 ? cs :
                i[4:3] == 2'b10 ? ss : ds;

    end

    // ### POP sreg
    8'b000xx111: case (m)

        0: begin t <= POP; op66 <= 1; end
        1: begin case (opcode[4:3]) 2'b00: es <= wb; 2'b10: ss <= wb; 2'b11: ds <= wb; endcase `TERM; end

    endcase

    // ### INC/DEC r16/32
    8'b0100xxxx: case (m)

        0: begin `WR16(i[2:0]); op1 <= r20; op2 <= 1; alu <= i[3] ? SUB : ADD; end
        1: begin m <= 0; t <= WB; wb <= ar; flags <= {af[11:1], flags[0]}; end

    endcase

    // Jccc b8 [1/2T]
    8'b0111_xxxx: case (m)

        0: if (branches[ opcode[3:1] ] == opcode[0]) begin `TERM; eip <= eip + 2; end
        1: begin eip <= eipn + sign; `TERM; end

    endcase

    // Jccc NEAR b32 [2/5T]
    9'b1_1000xxxx: begin

        if (branches[ opcode[3:1] ] == opcode[0]) begin `TERM; eip <= eip + 5; end
        else {ext, opcache} <= 8'hE9; // Перейти к JMP NEAR

    end

    // ### PUSH r [5/6T]
    8'b01010xxx: begin t <= PUSH; wb <= r20; m <= 0; end

    // ### POP r [6/8T]
    8'b01011xxx: case (m)

        0: begin `WR16(i[2:0]); t <= POP; end
        1: begin t <= WB; m <= 0; `TERM; end

    endcase

    // ### MOV rm|r
    8'b100010xx: case (m)

        0: begin t <= MODRM; cpen <= i[1]; end
        1: begin t <= WB; wb <= op2; m <= 0; end

    endcase

    // ### NOP [1T]
    // ### FWAIT [1T]
    8'b10010000,
    8'b10011011: begin m <= 0; `TERM; end

    // ### XCHG A, reg [2T]
    8'b10010xxx: begin

        t   <= WB;
        m   <= 0;
        wb  <= eax;
        eax <= op66 ? {eax[31:16], r20[15:0]} : r20;

        `WR16(i[2:0]);

    end

    // ### MOV rv, imm [3T/4T/6T]
    8'b1011xxxx: case (m)

        0: begin {dir, size, modrm[5:3]} <= {1'b1, i[3:0]}; end
        1: begin eip <= eipn; wb        <= i; m <= size ? 2 : 0; if (!size) t <= WB; end
        2: begin eip <= eipn; wb[15:8]  <= i; m <= op66 ? 0 : 3; if ( op66) t <= WB; end
        3: begin eip <= eipn; wb[23:16] <= i; m <= 4; end
        4: begin eip <= eipn; wb[31:24] <= i; m <= 0; t <= WB; end

    endcase

    // ### JMP near [dword]
    8'b11101001: case (m)

        1,2,3: begin ea  <= {i, ea[31:8]}; m <= m + 1; eip <= eipn; end
        4:     begin eip <= eipn + {i, ea[31:8]}; `TERM; end

    endcase

    // ### JMP short [byte]
    8'b11101011: case (m)

        1: begin m <= 0; eip <= eipn + sign; end

    endcase

    // HLT
    8'b11110100: begin m <= 0; eip <= eip; `TERM; end

endcase
