module ctl
(
    input               clock,
    input               reset_n,
    // ---
    input       [15:0]  a,
    input       [ 7:0]  o,
    output reg  [ 7:0]  pi,
    input               pr,
    input               pw,
    // ---
    output reg          intr,       // FlipFlop-запрос
    output reg  [ 3:0]  intv,       // Вектор прерываний
    // ---
    input       [ 7:0]  kb_d,
    input               kb_h,
    output reg  [10:0]  cursor
);

// -------------------------------------
reg         kb_hit;
reg [7:0]   kb_data;
reg [1:0]   int_ack;
reg         eoi;
// -------------------------------------

always @(posedge clock)
if (reset_n == 0) begin

    cursor  <= 1'b0;
    eoi     <= 1'b0;
    intr    <= 1'b0;
    intv    <= 1'b0;
    int_ack <= 1'b0;
    pi      <= 1'b0;

end
else begin

    // Если разрешен вызов прерывания
    if (!eoi) begin

        // Установить защелку чтобы второй раз не вызвать, если что-то еще есть в очередли
        if (int_ack) begin eoi <= 1; intr <= ~intr;  end

        // Определить вектор и убрать pending статус
        if      (int_ack[0]) begin intv <= 8; int_ack[0] <= 1'b0; end
        else if (int_ack[1]) begin intv <= 9; int_ack[1] <= 1'b0; end

    end

    // Запись в порт
    // ------------
    if (pw)
    case (a)
    // Завершить обработку прерывания
    8'h20: eoi <= 1'b0;
    // Быстрый доступ к курсору
    8'hF0: cursor[7:0]  <= o[7:0];
    8'hF1: cursor[10:8] <= o[2:0];
    endcase

    // Чтение из порта
    // ------------
    if (pr)
    case (a)
    8'h60: begin pi <= kb_data; end
    8'h64: begin pi <= kb_hit; kb_hit <= 1'b0; end
    endcase

    // Загрузка нового значения для клавиатуры
    // ------------
    if (kb_h) begin

        kb_hit      <= 1'b1;
        kb_data     <= kb_d;
        int_ack[1]  <= 1'b1;

    end

end

endmodule
