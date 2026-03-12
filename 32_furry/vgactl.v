/**
 * MODE:
 * 0 - 80x25
 * 1 - 80x50
 * 2 - 640x400x1
 * 3 - 640x200x2
 */
module vgactl
(
    input               clock,
    input               reset_n,
    input       [2:0]   mode,
    // ---
    output  reg         hs,
    output  reg         vs,
    output  reg [11:0]  rgb,
    // ---
    output  reg [14:0]  a,
    input       [ 7:0]  q
);

// 16-битная палитра
wire [191:0] pal =
{
    12'hFFF, 12'hFF0, 12'hF0F, 12'hF00, 12'h0FF, 12'h0F0, 12'h00F, 12'h888,
    12'hCCC, 12'h880, 12'h808, 12'h800, 12'h088, 12'h080, 12'h008, 12'h000
};

// -----------------------------------------------------------------------------
reg [10:0] x;           // 0..951
reg [ 9:0] y;           // 0..933
reg [ 7:0] bm;          // Битовая маска
reg [ 7:0] ch, ch_t;    // Атрибуты текстового символа
// -----------------------------------------------------------------------------
wire _hs  = x <  (720  + 40 + 116); // H-SYNC (NEG) x 2
wire _vs  = y >= (900  + 3  + 25);  // V-SYNC (POS)
wire xmax = (x == 951);
wire ymax = (y == 933);
// -----------------------------------------------------------------------------
wire vis  = (x >= 116 && x < 116 + 720) && (y >= 25 && y < 25 + 900);
wire fit4 = (xa >= 4 && xa < 644) && ya < 800;
wire fit8 = (xa >= 8 && xa < 648) && ya < 800;
// -----------------------------------------------------------------------------
// Положение луча внутри рисуемой области
wire [10:0] xa = x - 116 - 32; // 40=(1440-2*640):2:2
wire [ 9:0] ya = y - 25  - 50; // 50=(900-2*400):2
// -----------------------------------------------------------------------------
// 640x200x(1|2), 80x(25|50)
wire        c1 = bm[~xa[2:0]];
wire [ 1:0] c2 = {bm[{~xa[1:0],1'b1}], bm[{~xa[1:0],1'b0}]};
wire [ 3:0] c0 = c1     ? ch[3:0] : ch[7:4];
wire [ 3:0] c4 = xa[1]  ? bm[3:0] : bm[7:4];
wire [ 3:0] cc = mode == 3 ? c2 :
                 mode == 4 ? c4 : c0;
wire [11:0] cl = pal >> (12*cc);
// -----------------------------------------------------------------------------
always @(posedge clock)
begin

    hs  <= _hs;
    vs  <= _vs;
    rgb <= 12'h000;

    // Формирование исходного луча
    x <= xmax ?         0 : x + 1;
    y <= xmax ? (ymax ? 0 : y + 1) : y;

    // Процедура вывода пикселя на экран
    if (vis) begin

        case (mode)
        0,1: rgb <= fit8       ? cl      : 12'h111;
        2:   rgb <= fit8 && c1 ? 12'hCCC : 12'h111;
        3,4: rgb <= fit4       ? cl      : 12'h111;
        endcase

    end

    case (mode)

        // 80x25
        0:  case (xa[2:0])
            3: begin a    <= {ya[9:5]*80 + xa[10:3], 1'b0}; end // Запрос знакоместа
            4: begin a[0] <= 1'b1; end                          // Запрос атрибута
            5: begin a    <= 15'h7000 + {q[7:0], ya[4:1]};  end // Запрос маски
            6: begin ch_t <= q; end                             // Сохранение атрибута
            7: begin bm   <= q; ch <= ch_t; end                 // Сохранение маски и атрибута
            endcase

        // 80x50
        1:  case (xa[2:0])
            3: begin a    <= {ya[9:4]*80 + xa[10:3], 1'b0}; end
            4: begin a[0] <= 1'b1; end
            5: begin a    <= 15'h7800 + {q[7:0], ya[4:1]}; end
            6: begin ch_t <= q; end
            7: begin bm   <= q; ch <= ch_t; end
            endcase

        // 640x400x1
        2:  case (xa[2:0])
            5: begin a  <= ya[9:1]*80 + xa[10:3]; end
            7: begin bm <= q; end
            endcase

        // 640x200x2
        3:  case (xa[1:0])
            1: begin a <= ya[9:2]*160 + xa[10:2]; end
            3: begin bm <= q; end
            endcase

        // 320x200x4
        4:  case (xa[0])
            1: begin a <= ya[9:2]*160 + xa[10:2]; bm <= q; end
            endcase

    endcase

end

endmodule
