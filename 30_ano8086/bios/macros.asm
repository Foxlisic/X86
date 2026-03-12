CURSOR      EQU $F0

; Запуск, инициализация сегментов и регистров
macro STARTUP {

        CLI
        CLD
        MOV     AX, $B800
        MOV     ES, AX
        MOV     AX, CS
        MOV     DS, AX
        XOR     AX, AX
        MOV     SS, AX
        MOV     SP, 1024
        ; Установить вектора прерываний
        MOV     [SS:0x20], WORD INT8
        MOV     [SS:0x24], WORD INT9
        MOV     [SS:0x22], CS
        MOV     [SS:0x26], CS
}

; Дополнить файл до необходимого количества байт и создать в конце переход
macro TAIL e {

        TIMES   (e-16-$) DB 0xFF
        JMP     $F800:STA               ; 5
        TIMES   11 DB 0x90              ; 11
}
