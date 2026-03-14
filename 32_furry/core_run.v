// ИСПОЛНЕНИЕ ИНСТРУКЦИИ
RUN: casex ({ext,opcode})

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

    // ### INC/DEC r16/32
    8'b0100xxxx: case (m)

        0: begin `WR16(i[2:0]); op1 <= r20; op2 <= 1; alu <= i[3] ? SUB : ADD; end
        1: begin m <= 0; t <= WB; wb <= ar; flags <= {af[11:1], flags[0]}; end

    endcase

    // ### MOV rm|r
    8'b100010xx: case (m)

        0: begin t <= MODRM; cpen <= i[1]; end
        1: begin t <= WB; wb <= op2; m <= 0; end

    endcase

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

endcase
