module de0
(
      // Reset
      input              RESET_N,

      // Clocks
      input              CLOCK_50,
      input              CLOCK2_50,
      input              CLOCK3_50,
      inout              CLOCK4_50,

      // DRAM
      output             DRAM_CKE,
      output             DRAM_CLK,
      output      [1:0]  DRAM_BA,
      output      [12:0] DRAM_ADDR,
      inout       [15:0] DRAM_DQ,
      output             DRAM_CAS_N,
      output             DRAM_RAS_N,
      output             DRAM_WE_N,
      output             DRAM_CS_N,
      output             DRAM_LDQM,
      output             DRAM_UDQM,

      // GPIO
      inout       [35:0] GPIO_0,
      inout       [35:0] GPIO_1,

      // 7-Segment LED
      output      [6:0]  HEX0,
      output      [6:0]  HEX1,
      output      [6:0]  HEX2,
      output      [6:0]  HEX3,
      output      [6:0]  HEX4,
      output      [6:0]  HEX5,

      // Keys
      input       [3:0]  KEY,

      // LED
      output      [9:0]  LEDR,

      // PS/2
      inout              PS2_CLK,
      inout              PS2_DAT,
      inout              PS2_CLK2,
      inout              PS2_DAT2,

      // SD-Card
      output             SD_CLK,
      inout              SD_CMD,
      inout       [3:0]  SD_DATA,

      // Switch
      input       [9:0]  SW,

      // VGA
      output      [3:0]  VGA_R,
      output      [3:0]  VGA_G,
      output      [3:0]  VGA_B,
      output             VGA_HS,
      output             VGA_VS
);

// High-Impendance-State
assign DRAM_DQ = 16'hzzzz;
assign GPIO_0  = 36'hzzzzzzzz;
assign GPIO_1  = 36'hzzzzzzzz;

// LED OFF
assign HEX0 = 7'b1111111;
assign HEX1 = 7'b1111111;
assign HEX2 = 7'b1111111;
assign HEX3 = 7'b1111111;
assign HEX4 = 7'b1111111;
assign HEX5 = 7'b1111111;

assign SD_DATA[0] = 1'bZ;

// Провода
// ---------------------------------------------------------------------
wire        clock_26, clock_53, clock_106, reset_n;

// Генератор частоты
// ---------------------------------------------------------------------
pll u0
(
    .rst        (~RESET_N),
    .clkin      (CLOCK_50),
    .locked     (reset_n),
    .m25        (clock_26),
    .m50        (clock_53),
    .m106       (clock_106),
);

// Подрубка процессора
// -----------------------------------------------------------------------------
wire        ce = 1'b1;
wire [31:0] a;
wire [ 7:0] i;
wire [ 7:0] o;
wire        w;

core C1
(
    // @TODO .clock  (clock_26),
    .rst_n  (reset_n),
    .ce     (ce),
    // Подключение к контроллеру памяти
    .a      (a),
    .i      (i),
    .o      (o),
    .w      (w),
    // Первичное значение регистров
    ._cs    (16'hF000),
    ._eip   (32'hFFF0)
);

// Блочная память
// Негативный клок CLK100 дает смещение +4.71ns (2x106 Mhz) и создает ~32ns стабильного выхода Q
// -----------------------------------------------------------------------------

wire        en1 = a[31:18] == 1'b0;        // 00000..3FFFF 256K
wire        en2 = a[31:15] == 5'b10100;    // A0000..A7FFF 32k
wire [ 7:0] q1, q2, qv;
wire [14:0] av;

assign i = en1 ? q1 : (en2 ? q2 : 8'h00);

// 256Kb Память для программ
ram  M1(.c(~clock_106), .a(a[17:0]), .q(q1), .w(w & en1), .d(o));

// 32K Видеопамять
vram M2
(
    // 4x CPU для мгновенного отклика от процессора
    .c (~clock_106), .a (a[14:0]), .q(q2), .w(w & en2), .d(o),
    // 1x GPU для синхронной памяти
    .ch( clock_53),  .ax(av),      .qx(qv)
);

// -----------------------------------------------------------------------------
// 320x200x4 или 640x400x1, 640x200x2, 80x25, 80x50
vgactl C2
(
    .clock  (clock_53),
    .mode   (3'h4),
    .hs     (VGA_HS),
    .vs     (VGA_VS),
    .rgb    ({VGA_R,VGA_G,VGA_B}),
    .a      (av),
    .q      (qv),
);

endmodule

`include "../core.v"
`include "../vgactl.v"
