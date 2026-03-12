<?php

/**
 * Конвертирует BMP-файл в MIF
 */

$data = [];

function dpat($x, $y, $cl)
{
    $lookup = [
        [ 0, 32,  8, 40,  2, 34, 10, 42],
        [48, 16, 56, 24, 50, 18, 58, 26],
        [12, 44,  4, 36, 14, 46,  6, 38],
        [60, 28, 52, 20, 62, 30, 54, 22],
        [ 3, 35, 11, 43,  1, 33,  9, 41],
        [51, 19, 59, 27, 49, 17, 57, 25],
        [15, 47,  7, 39, 13, 45,  5, 37],
        [63, 31, 55, 23, 61, 29, 53, 21],
    ];

    return $cl + 1.5*($lookup[$y & 7][$x & 7] - 32);
}

// Конвертируется туда-сюда
function color8($x, $y, $rgb)
{
    $r = ($rgb >> 16) & 255;
    $g = ($rgb >> 8 ) & 255;
    $b = $rgb & 255;
    $u = 128;

    $pat = [
        (int)(dpat($x, $y, $r) >= $u),
        (int)(dpat($x, $y, $g) >= $u),
        (int)(dpat($x, $y, $b) >= $u)
    ];

    return $pat[0]*4 + $pat[1]*2 + $pat[2];
}

switch ($argv[1] ?? "") {

    case 'f16':

        include "font.php";

        for ($i = 0; $i < 8192; $i++) $data[$i] = $font16[$i & 0x0FFF];
        for ($i = 0; $i < 4096; $i++) $data[0x7000+$i] = $font16[$i];
        break;

    case 'lo':

        $bmp = substr(file_get_contents($argv[2] ?? "r320.bmp"), 118);
        for ($i = 199; $i >= 0; $i--) {
            $str = substr($bmp, 160*$i, 160);
            for ($j = 0; $j < 160; $j++) {
                $data[] = ord($str[$j]);
            }
        }
        break;

    case 'hi':

        $bmp = substr(file_get_contents($argv[2] ?? "bogota.bmp"), 62);

        $a = 0;
        for ($i = 399; $i >= 0; $i--) {
            $str = substr($bmp, 80*$i, 80);
            for ($j = 0; $j < 80; $j++) {
                $data[] = ord($str[$j]);
            }
        }

        break;

    // Конвертировать картинку из PNG и других приколов
    case 'p8':

        $im = imagecreatefromstring(file_get_contents($argv[2] ?? "city.png"));

        for ($y = 0; $y < 200; $y++)
        for ($x = 0; $x < 320; $x += 2) {

            $c1 = imagecolorat($im, $x,   $y);
            $c2 = imagecolorat($im, $x+1, $y);

            $data[] = color8($x, $y, $c1)*16 + color8($x+1, $y, $c2);
        }

        break;

    default:

        die("Требуется мощное и активное супер-действие, бу-бука!\n");
}

$out = [
    "WIDTH=8;",
    "DEPTH=32768;",
    "ADDRESS_RADIX=HEX;",
    "DATA_RADIX=HEX;",
    "CONTENT BEGIN",
];

for ($i = 0; $i < 32768; $i++) $out[] = sprintf("  %04X: %02X;", $i, $data[$i] ?? 0);

$out[] = "END;";
file_put_contents("../vram.mif", join("\n", $out));

