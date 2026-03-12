`timescale 10ns / 1ns
module tb;

// --------------------------------
reg clock_25 = 0, clock_100 = 0, rst_n = 0;
// --------------------------------
always #2.0 clock_25  = ~clock_25;
always #0.5 clock_100  = ~clock_100;
// --------------------------------
reg [7:0] mem[1048576];
// --------------------------------
initial begin #4.0 rst_n = 1; #1000 $finish; end
initial begin $dumpfile("tb.vcd"); $dumpvars(0, tb); end
initial begin $readmemh("tb.hex", mem, 20'hFFFF0); end
// --------------------------------
wire [31:0] a;
wire [ 7:0] i = mem[a[19:0]];
wire [ 7:0] o;
wire        w;
// --------------------------------
always @(posedge clock_25) if (w) mem[a[19:0]] <= o;
// --------------------------------

core C1
(
    .clock  (clock_25),
    .rst_n  (rst_n),
    .ce     (1'b1),
    // Подключение к контроллеру памяти
    .a      (a),
    .i      (i),
    .o      (o),
    .w      (w),
    // Первичное значение регистров
    ._eax   (32'h0000),
    ._ebx   (32'h0000),
    ._ecx   (32'h0000),
    ._edx   (32'h0000),
    ._esp   (32'h0000),
    ._ebp   (32'h0000),
    ._esi   (32'h0000),
    ._edi   (32'h0000),
    ._es    (16'hFFFF),
    ._cs    (16'hF000),
    ._ss    (16'hFFFF),
    ._ds    (16'h0000),
    ._eip   (32'hFFF0),
    ._flags (12'b0000_0000_0000)
);

endmodule
