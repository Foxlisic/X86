// Макрос завершения опкода
`define TERM begin eoi <= 1; {m, rep, over} <= 1'b0; end

// Алиас регистровой части MODRM
`define REG  modrm[5:3]

// Макрос для записи в r8, r16
`define W8   {dir,size} <= 2'b10; modrm[5:3]
`define W16  {dir,size} <= 2'b11; modrm[5:3]

// Если cpen=0, то выйти из процедуры считывания операндов
`define CPEN cp <= cpen; if (cpen == 0) begin m1 <= 0; t <= RUN; end

// Объявление констант
localparam RUN = 0, MODRM = 1, WB  = 2, PUSH = 3, POP = 4, DIV = 5, INTERRUPT = 6, UNDEF = 7;
localparam CF  = 0, PF    = 2, AF  = 4, ZF   = 6, SF  = 7, TF  = 8, IF  = 9, DF  = 10, OF = 11;
localparam ADD = 0, OR    = 1, ADC = 2, SBB  = 3, AND = 4, SUB = 5, XOR = 6, CMP = 7;
localparam ROL = 0, ROR   = 1, RCL = 2, RCR  = 3, SHL = 4, SHR = 5, SAL = 6, SAR = 7;

// Для того чтобы не использовать ES:
localparam FS  = 16'hA000, GS = 16'hB800;
