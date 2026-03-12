<?php

// Преобразовать TB для работы C++
foreach (glob("tests/v2/*.gz") as $file) {

    $name = str_replace('.json.gz', '', basename($file));
    $data = json_decode(gzdecode(file_get_contents($file)), 1);
    $out  = [];

    foreach ($data as $item) {

        $out[] = "N {$item['name']}";
        foreach ($item['initial']['regs'] as $n => $v) {
            $out[] = "R $n $v";
        }

        foreach ($item['initial']['ram'] as $m) {
            $out[] = "M $m[0] $m[1]";
        }

        $out[] = "+";

        foreach ($item['final']['regs'] ?? [] as $n => $v) {
            $out[] = "r $n $v";
        }

        foreach ($item['final']['ram'] ?? [] as $m) {
            $out[] = "m $m[0] $m[1]";
        }

        $out[] = "";
    }

    $out[] = "X";

    file_put_contents("tests_tb/$name.txt", join("\n", $out));
    echo "$name\n";
}
