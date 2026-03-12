initial begin
  mem[20'hACB0E] = 8'hF2;
  mem[20'hACB0F] = 8'hA4;
  mem[20'h76B2C] = 8'h8C;
  mem[20'h76B2B] = 8'h8E;
  _ax = 16'h3F6A; _cx = 16'h0002; _dx = 16'hA511; _bx = 16'hB56E;
  _sp = 16'hE2D8; _bp = 16'h5641; _si = 16'h285C; _di = 16'hE442;
  _es = 16'hCD82; _cs = 16'h9F8D; _ss = 16'h639C; _ds = 16'h742D;
  _ip = 16'hD23E;
  _flags = 12'h443;
end
always @(posedge m0) if (rst_n) begin
 $display("#IP %h", ip);
 $display("#FLAGS %h", flags);
 $display("#AX %h", ax);
 $display("#CX %h", cx);
 $display("#DX %h", dx);
 $display("#BX %h", bx);
 $display("#SP %h", sp);
 $display("#BP %h", bp);
 $display("#SI %h", si);
 $display("#DI %h", di);
 $display("#ES %h", es);
 $display("#CS %h", cs);
 $display("#SS %h", ss);
 $display("#DS %h", ds);
 $display("&900194 %h", mem[900194]);
 $display("&900193 %h", mem[900193]);
$finish; end