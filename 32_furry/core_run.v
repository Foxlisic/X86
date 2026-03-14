// ИСПОЛНЕНИЕ ИНСТРУКЦИИ
RUN: casex (opcode)

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

    // ### MOV rm|r
    8'b100010xx: case (m)

        0: begin t <= MODRM; cpen <= i[1]; end
        1: begin t <= WB; wb <= op2; m <= 0; end

    endcase

    // ### MOV rv, imm [4T/6T]
    8'b1011xxxx: case (m)

        0: begin {dir, size, modrm[5:3]} <= {1'b1, i[3:0]}; end
        1: begin eip <= eipn; wb        <= i; m <= size ? 2 : 0; if (size) t <= WB; end
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

    // ### JMP Short
    8'b11101011: case (m)

        1: begin m <= 0; eip <= eipn + sign; end

    endcase

    // ### REPNZ, REPZ [1T]
    8'b1111001x: begin m <= 0; rep <= i[1:0]; end

endcase
