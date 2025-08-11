module de0(

      /* Reset */
      input              RESET_N,

      /* Clocks */
      input              CLOCK_50,
      input              CLOCK2_50,
      input              CLOCK3_50,
      inout              CLOCK4_50,

      /* DRAM */
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

      /* GPIO */
      inout       [35:0] GPIO_0,
      inout       [35:0] GPIO_1,

      /* 7-Segment LED */
      output      [6:0]  HEX0,
      output      [6:0]  HEX1,
      output      [6:0]  HEX2,
      output      [6:0]  HEX3,
      output      [6:0]  HEX4,
      output      [6:0]  HEX5,

      /* Keys */
      input       [3:0]  KEY,

      /* LED */
      output      [9:0]  LEDR,

      /* PS/2 */
      inout              PS2_CLK,
      inout              PS2_DAT,
      inout              PS2_CLK2,
      inout              PS2_DAT2,

      /* SD-Card */
      output             SD_CLK,
      inout              SD_CMD,
      inout       [3:0]  SD_DATA,

      /* Switch */
      input       [9:0]  SW,

      /* VGA */
      output      [3:0]  VGA_R,
      output      [3:0]  VGA_G,
      output      [3:0]  VGA_B,
      output             VGA_HS,
      output             VGA_VS
);

// Z-state
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

// ---------------------------------------------------------------------
wire clock_25;  wire clock_50;  wire clock_75;
wire clock_100; wire clock_106; wire locked0;

reg [1:0] locked1 = 2'b00;
wire      locked  = locked1 == 2'b11;

pll PLL(

    // Источник тактирования
    .clkin (CLOCK_50),

    // Производные частоты
    .m25   (clock_25),
    .m50   (clock_50),
    .m75   (clock_75),
    .m100  (clock_100),
    .m106  (clock_106),

    .locked (locked0),
);

// Схема стабилизации PLL
always @(posedge clock_25) locked1 <= {locked1[0], locked0};

// Видеоадаптер
// -----------------------------------------------------------------------

wire [12:0] cga_address;
wire [ 7:0] cga_data;
reg  [10:0] cga_cursor;

cga CGA
(
    .clock_25 (clock_25),
    // Интерфейс
    .R (VGA_R), .HS (VGA_HS),
    .G (VGA_G), .VS (VGA_VS),
    .B (VGA_B),
    // Память
    .address    (cga_address),
    .data       (cga_data),
    .cursor     (cga_cursor),
);

// Контроллер памяти
// ---------------------------------------------------------------------

wire [19:0] address;
wire [ 7:0] o_data;
wire        we;

wire [ 7:0] q_cgamem;
wire [ 7:0] q_memory;
wire [ 7:0] q_bios;
reg  [ 7:0] i_data;

reg we_cgamem = 0;
reg we_memory = 0;

memory MEMORY // 256kb
(
    .clock      (clock_100),
    .address_a  (address[17:0]),
    .data_a     (o_data),
    .wren_a     (we_memory),
    .q_a        (q_memory)
);

cgamem CGAMEM // 8kb
(
    .clock      (clock_100),
    .address_a  (cga_address),
    .q_a        (cga_data),
    .address_b  (address[12:0]),
    .data_b     (o_data),
    .wren_b     (we_cgamem),
    .q_b        (q_cgamem)
);

bios BIOS // 32kb
(
    .clock      (clock_100),
    .address_a  (address[14:0]),
    .q_a        (q_bios)
);

// Маршрутизация
always @* begin

    i_data = 8'hFF;
    we_cgamem = 0;
    we_memory = 0;

    casex (address)

        // 00000-3ffff 256k Общая память
        20'b00xx_xxxx_xxxx_xxxx_xxxx: begin i_data = q_memory; we_memory = we; end

        // b8000-b9fff 8k CGA
        20'b1011_100x_xxxx_xxxx_xxxx: begin i_data = q_cgamem; we_cgamem = we; end

        // f8000-fffff 32k BIOS
        20'b1111_1xxx_xxxx_xxxx_xxxx: begin i_data = q_bios; end

    endcase

end

// Процессор
// ---------------------------------------------------------------------
cpu CPU
(
    // Главный интерфейс
    .clock          (clock_25 & locked),
    .address        (address),
    .i_data         (i_data),
    .o_data         (o_data),
    .we             (we),

    // PIC
    .irq_signal     (irq_signal),
    .irq            (irq),

    // Порты
    .port_address   (port_address),
    .port_write     (port_write),
    .port_read      (port_read),
    .port_in        (port_in),
    .port_out       (port_out),
    .port_ready     (port_ready)
);

// PIC
// ---------------------------------------------------------------------

wire [7:0] irq;
wire       irq_signal;

// Клавиатура
// ---------------------------------------------------------------------

wire [7:0] ps2_data;
wire       ps2_hit;

// Контроллер клавиатуры
keyboard KEYBOARD
(
    .CLOCK_50           (clock_50),    // Тактовый генератор на 50 Мгц
    .PS2_CLK            (PS2_CLK),     // Таймингс PS/2
    .PS2_DAT            (PS2_DAT),     // Данные с PS/2
    .received_data      (ps2_data),    // Принятые данные
    .received_data_en   (ps2_hit),     // Нажата клавиша
);

// ---------------------------------------------------------------------
// Контроллер портов-ввода вывода
// ---------------------------------------------------------------------

wire [15:0] port_address;
wire [ 7:0] port_in;
wire [ 7:0] port_out;
wire        port_write;
wire        port_read;
wire        port_ready;

ctl_port CTLPORT
(
    .clock_cpu      (clock_25),
    .port_address   (port_address),
    .port_in        (port_in),
    .port_out       (port_out),
    .port_write     (port_write),
    .port_read      (port_read),
    .port_ready     (port_ready),

    // Клавиатура
    .clock_50       (clock_50),
    .kb_hit         (ps2_hit),
    .kb_data        (ps2_data),

    // PIC
    .irq_signal     (irq_signal),
    .irq            (irq)
);

endmodule

// *********************************************************************
// Модуль PLL
// *********************************************************************

module  pll(

    input wire clkin,
    input wire rst,

    output wire m25,
    output wire m50,
    output wire m75,
    output wire m100,
    output wire m106,

    output wire locked
);

altera_pll #(
    .fractional_vco_multiplier("false"),
    .reference_clock_frequency("50.0 MHz"),
    .operation_mode("normal"),
    .number_of_clocks(5),
    .output_clock_frequency0("25.0 MHz"),
    .phase_shift0("0 ps"),
    .duty_cycle0(50),
    .output_clock_frequency1("100.0 MHz"),
    .phase_shift1("0 ps"),
    .duty_cycle1(50),
    .output_clock_frequency2("50 MHz"),
    .phase_shift2("0 ps"),
    .duty_cycle2(50),
    .output_clock_frequency3("106 MHz"),
    .phase_shift3("0 ps"),
    .duty_cycle3(50),
    .output_clock_frequency4("75 MHz"),
    .phase_shift4("0 ps"),
    .duty_cycle4(50),
    .output_clock_frequency5("0 MHz"),
    .phase_shift5("0 ps"),
    .duty_cycle5(50),
    .output_clock_frequency6("0 MHz"),
    .phase_shift6("0 ps"),
    .duty_cycle6(50),
    .output_clock_frequency7("0 MHz"),
    .phase_shift7("0 ps"),
    .duty_cycle7(50),
    .output_clock_frequency8("0 MHz"),
    .phase_shift8("0 ps"),
    .duty_cycle8(50),
    .output_clock_frequency9("0 MHz"),
    .phase_shift9("0 ps"),
    .duty_cycle9(50),
    .output_clock_frequency10("0 MHz"),
    .phase_shift10("0 ps"),
    .duty_cycle10(50),
    .output_clock_frequency11("0 MHz"),
    .phase_shift11("0 ps"),
    .duty_cycle11(50),
    .output_clock_frequency12("0 MHz"),
    .phase_shift12("0 ps"),
    .duty_cycle12(50),
    .output_clock_frequency13("0 MHz"),
    .phase_shift13("0 ps"),
    .duty_cycle13(50),
    .output_clock_frequency14("0 MHz"),
    .phase_shift14("0 ps"),
    .duty_cycle14(50),
    .output_clock_frequency15("0 MHz"),
    .phase_shift15("0 ps"),
    .duty_cycle15(50),
    .output_clock_frequency16("0 MHz"),
    .phase_shift16("0 ps"),
    .duty_cycle16(50),
    .output_clock_frequency17("0 MHz"),
    .phase_shift17("0 ps"),
    .duty_cycle17(50),
    .pll_type("General"),
    .pll_subtype("General")
)
altera_pll_i (
    .rst (rst),
    .outclk ({m75, m106, m50, m100, m25}),
    .locked (locked),
    .fboutclk ( ),
    .fbclk (1'b0),
    .refclk (clkin)
);

endmodule

// Модуль процессора
`include "../cpu.v"
`include "../ctl_port.v"

