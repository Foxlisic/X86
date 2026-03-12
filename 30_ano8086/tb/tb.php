<?php

$file = $argv[1] ?? "00";
$line = $argv[2] ?? "";
$file = __DIR__ . "/tests/v2/$file.json.gz";
$data = gzdecode(file_get_contents($file));
$data = json_decode($data, 1);

function createTest($item)
{
    $regs_in = $item['initial']['regs'];

    // Инициализация памяти и остановка выполнения
    $code = ["initial begin"];
    foreach ($item['initial']['ram'] as $r) {
        $code[] = sprintf("  mem[20'h%05X] = 8'h%02X;", $r[0], $r[1]);
    }

    // Назначение регистров
    $code[] = sprintf("  _ax = 16'h%04X; _cx = 16'h%04X; _dx = 16'h%04X; _bx = 16'h%04X;", $regs_in['ax'], $regs_in['cx'], $regs_in['dx'], $regs_in['bx']);
    $code[] = sprintf("  _sp = 16'h%04X; _bp = 16'h%04X; _si = 16'h%04X; _di = 16'h%04X;", $regs_in['sp'], $regs_in['bp'], $regs_in['si'], $regs_in['di']);
    $code[] = sprintf("  _es = 16'h%04X; _cs = 16'h%04X; _ss = 16'h%04X; _ds = 16'h%04X;", $regs_in['es'], $regs_in['cs'], $regs_in['ss'], $regs_in['ds']);
    $code[] = sprintf("  _ip = 16'h%04X;",    $regs_in['ip']);
    $code[] = sprintf("  _flags = 12'h%03X;", $regs_in['flags'] & 0xFFF);
    $code[] = "end";

    $code[] = 'always @(posedge m0) if (rst_n) begin';
    $code[] = ' $display("#IP %h", ip);';
    $code[] = ' $display("#FLAGS %h", flags);';
    $code[] = ' $display("#AX %h", ax);';
    $code[] = ' $display("#CX %h", cx);';
    $code[] = ' $display("#DX %h", dx);';
    $code[] = ' $display("#BX %h", bx);';
    $code[] = ' $display("#SP %h", sp);';
    $code[] = ' $display("#BP %h", bp);';
    $code[] = ' $display("#SI %h", si);';
    $code[] = ' $display("#DI %h", di);';
    $code[] = ' $display("#ES %h", es);';
    $code[] = ' $display("#CS %h", cs);';
    $code[] = ' $display("#SS %h", ss);';
    $code[] = ' $display("#DS %h", ds);';

    foreach ($item['final']['ram'] as $r) {
        $code[] = ' $display("&'.$r[0].' %h", mem['.$r[0].']);';
    }

    $code[] = '$finish; end';

    file_put_contents("tb_tests.v", join("\n", $code));
}

function checkTest($item)
{
    $reg_ed  = [];
    $mem_ed  = [];
    $regs_ou = $item['final']['regs'];

    createTest($item);

    // Компиляция и исполнение теста
    $error    = `iverilog -g2005-sv -DICARUS=1 -o main.qqq tb.v u8086.v`;
    $response = `vvp main.qqq`;

    // Парсинг и сверка результатов
    foreach (explode("\n", $response) as $row) {

        if (preg_match('~#(\w+)\s+(.+)~', strtolower($row), $c)) {
            $reg_ed[$c[1]] = hexdec($c[2]);
        }

        if (preg_match('~&(\d+)\s+(.+)~', strtolower($row), $c)) {
            $mem_ed[$c[1]] = hexdec($c[2]);
        }
    }

    // Сверка регистров после исполнения инструкции
    foreach ($item['final']['regs'] as $a => $b) {

        if ($a == 'flags') $b &= 0xFFF;

        if ($reg_ed[$a] != $b) {
            return "REG: $a. VALID $b <> {$reg_ed[$a]}\n";
        }
    }

    // Проверка памяти после выполнения
    foreach ($item['final']['ram'] as $r) {

        if ($mem_ed[$r[0]] != $r[1]) {
            return "MEM: $a. VALID $r[1] <> {$mem_ed[$r[0]]}\n";
        }
    }

    return false;
}

foreach ($data as $item) {

    $idx  = $item['idx'];
    $name = $item['name'];
    $byte = join(' ', array_map(fn($e) => sprintf("%02X", $e), $item['bytes']));

    if ($line !== "" && $line != $idx) {
        continue;
    }

    echo "[$idx] $name\n";

    if ($err = checkTest($item)) {
        die("$err\n");
    }
}
