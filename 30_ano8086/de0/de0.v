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
      output             DRAM_CS,
      output             DRAM_CKE,
      output             DRAM_CLK,
      output      [12:0] DRAM_A,
      output      [1:0]  DRAM_B,
      inout       [15:0] DRAM_DQ,
      output             DRAM_CAS,
      output             DRAM_RAS,
      output             DRAM_W,
      output             DRAM_L,
      output             DRAM_U,

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

// -----------------------------------------------------------------------------
wire clock_25, clock_50, clock_100, rst_n;

pll u0
(
    // Источник тактирования
    .clkin  (CLOCK_50),

    // Производные частоты
    .m25    (clock_25),
    .m50    (clock_50),
    .m100   (clock_100),
    .locked (rst_n)
);
// -----------------------------------------------------------------------------
wire [ 7:0] kbd;
wire        hit;
// -----------------------------------------------------------------------------
wire [19:0] a;
wire [ 7:0] o;
wire        w, pr, pw;
wire [ 7:0] i128, i64a, i64v, i4a, i4b, i32, pi;
wire [ 7:0] i = m128 ? i128 : m64a ? i64a : m64v ? i64v :
                m4a  ? i4a  : m4b  ? i4b  : m32  ? i32  : 1'b0;
// -----------------------------------------------------------------------------

/*
    00000-1FFFF 128k   i128 | RAM
    20000-2FFFF 64k    i64a | RAM
    A0000-AFFFF 64k    i64v | 640x400x4, 640x200x16, 320x200x256
    B8000-B8FFF 4k     i4a  | TEXT
    B9000-B9FFF 4k     i4b  | FONT
    F8000-FFFFF 32k    i32  | BIOS
 */

wire m128 = a <= 20'h1FFFF;
wire m64a = a >= 20'h20000 && a <= 20'h2FFFF;
wire m64v = a >= 20'hA0000 && a <= 20'hAFFFF;
wire m4a  = a >= 20'hB8000 && a <= 20'hB8FFF;
wire m4b  = a >= 20'hB9000 && a <= 20'hB9FFF;
wire m32  = a >= 20'hF8000;

// ----------------------------------------------------------------------------
wire [17:0] video_a;
wire [ 7:0] video_i, video_f;
wire [10:0] cursor;
// -----------------------------------------------------------------------------
video VGA
(
    .clock  (clock_25),
    // -- ИНТЕРФЕЙС
    .r      (VGA_R),
    .g      (VGA_G),
    .b      (VGA_B),
    .hs     (VGA_HS),
    .vs     (VGA_VS),
    // -- ПАМЯТЬ
    .a      (video_a),
    .i      (video_i),
    .f      (video_f),
    // -- УПРАВЛЕНИЕ
    .cursor (cursor)
);
// -----------------------------------------------------------------------------
u8086 CPU
(
    .clock  (clock_25),
    .rst_n  (rst_n),
    .ce     (1'b1),
    // Память
    .a      (a),
    .i      (i),
    .o      (o),
    .w      (w),
    // Порты
    .pi     (pi),
    .pr     (pr),
    .pw     (pw),
    // Стартовый адрес в BIOS
    ._cs    (16'hF000),
    ._ip    (16'hFFF0)
);
// -----------------------------------------------------------------------------
ps2 KBD
(
    .clock      (clock_25),
    .reset_n    (rst_n),
    .ps_clk     (PS2_CLK),
    .ps_dat     (PS2_DAT),
    .kbd        (kbd),
    .hit        (hit)
);
// -----------------------------------------------------------------------------
ctl CTL
(
    .clock      (clock_25),
    .reset_n    (rst_n),
    // -- Обращения к портам
    .a          (a[15:0]),
    .o          (o),
    .pi         (pi),
    .pw         (pw),
    .pr         (pr),
    // -- Интерфейс
    .kb_d       (kbd),
    .kb_h       (hit),
    .cursor     (cursor)
);
// ----------------------------------------------------------------------------- 128+2*64+32+2*4
mem128 M128(.c(clock_100), .a(a[16:0]), .q(i128), .d(o), .w(w & m128));
mem64  M64A(.c(clock_100), .a(a[15:0]), .q(i64a), .d(o), .w(w & m64a));
mem64  M64V(.c(clock_100), .a(a[15:0]), .q(i64v), .d(o), .w(w & m64v));
mem32  M32 (.c(clock_100), .a(a[14:0]), .q(i32),  .d(o), .w(w & m32));
mem4   M4A (.c(clock_100), .a(a[11:0]), .q(i4a),  .d(o), .w(w & m4a), .ax(video_a), .qx(video_i));
mem4   M4B (.c(clock_100), .a(a[11:0]), .q(i4b),  .d(o), .w(w & m4b), .ax(video_a), .qx(video_f));
// -----------------------------------------------------------------------------

endmodule

`include "../video.v"
`include "../ps2.v"
`include "../ctl.v"
`include "../u8086.v"
