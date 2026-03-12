`timescale 10ns / 1ns
module tb;
// -----------------------------------------------------------------------------
reg clock_25 = 0, clock_100 = 0, rst_n = 0;
// -----------------------------------------------------------------------------
always #0.5 clock_100 = ~clock_100;
always #2.0 clock_25  = ~clock_25;
// -----------------------------------------------------------------------------
initial begin

    #5.0    rst_n = 1;
    #6.0    kb_h = 1; kb_d = 8'h41;
    #10.0   kb_h = 0;
    #50    $finish;

end
initial begin $readmemh("tb.hex", mem); $dumpfile("tb.vcd"); $dumpvars(0, tb); end
// -----------------------------------------------------------------------------
reg [7:0] mem[1024*1024];
always @(posedge clock_100) begin i <= mem[a]; if (w) mem[a] <= o; end
// -----------------------------------------------------------------------------
wire [19:0] a;
reg  [ 7:0] i;
wire [ 7:0] o, pi;
wire        w;
wire        intr;
wire [ 3:0] intv;
reg  [ 7:0] kb_d = 8'h00;
reg         kb_h = 1'b0;
// -----------------------------------------------------------------------------
wire        m0, eoi, pr, pw;
wire [15:0] ax,  cx,  dx,  bx,  sp,  bp,  si,  di,  es,  cs,  ss,  ds,  ip;
wire [11:0] flags;
// -----------------------------------------------------------------------------
u8086 C1
(
    // --- CTL
    .clock  (clock_25),
    .rst_n  (rst_n),
    .ce     (1'b1),
    .m0     (m0),
    .eoi    (eoi),
    // --- MEM
    .a      (a),
    .i      (i),
    .o      (o),
    .w      (w),
    .pi     (pi),
    .pr     (pr),
    .pw     (pw),
    // --- INT
    .intr   (intr),
    .intv   (intv),
    // --- OUT
    .ax     (ax), .cx (cx), .dx (dx), .bx (bx),
    .sp     (sp), .bp (bp), .si (si), .di (di),
    .es     (es), .cs (cs), .ss (ss), .ds (ds),
    .ip     (ip),
    .flags  (flags),
    // --- IN
    ._ax    (16'h0000),
    ._cx    (16'h0000),
    ._dx    (16'h0000),
    ._bx    (16'h0000),
    ._sp    (16'h0400),
    ._bp    (16'h0000),
    ._si    (16'h0000),
    ._di    (16'h0000),
    ._es    (16'h0000),
    ._cs    (16'h0000),
    ._ss    (16'h0000),
    ._ds    (16'h0000),
    ._ip    (16'h0000),
    ._flags (12'h000)
);
// -----------------------------------------------------------------------------
ctl CTL
(
    .clock      (clock_25),
    .reset_n    (rst_n),
    .a          (a[15:0]),
    .o          (o),
    .pi         (pi),
    .pw         (pw),
    .pr         (pr),
    .intr       (intr),
    .intv       (intv),
    .kb_d       (kb_d),
    .kb_h       (kb_h)
);

endmodule
