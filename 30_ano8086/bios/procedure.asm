; Очистить экран от мусора (AL) и установить новый ES:
; ------------------------------------------------------------------------------
CLS:        MOV     ES, [CS:B800]
            MOV     [CS:CUR_ATTR], AL
            MOV     AH, AL
            MOV     AL, 0
            MOV     CX, 2000
            XOR     DI, DI
            REP     STOSW
            XOR     AX, AX
            CALL    LOCATE
            RET

; Вычислить адрес курсора DI в текстовом режиме AH=Y, AL=X
; ------------------------------------------------------------------------------
LOC:        PUSH    AX BX
            MOV     BH, 0
            MOV     BL, AH
            IMUL    DI, BX, 80
            MOV     AH, 0
            ADD     DI, AX
            POP     BX AX
            RET

; Установка курсора AH=Y, AL=X
; ------------------------------------------------------------------------------
LOCATE:     MOV     [CS:CUR_XY], AX
.SET:       PUSH    DI
            CALL    LOC
            XCHG    AX, DI
            OUT     CURSOR, AX
            POP     DI
            RET

; Печать символа AL в телетайпе-режиме (десу?)
; ------------------------------------------------------------------------------
PRN:        PUSH    AX BX DI
            XCHG    AX, BX
            MOV     AX, [CS:CUR_XY]
            CMP     BL, 10
            JE      .L1
            PUSH    AX
            CALL    LOC
            ADD     DI, DI
            XCHG    AX, BX
            MOV     AH, [CS:CUR_ATTR]
            STOSW
            POP     AX
            INC     AL
            CMP     AL, 80
            JB      @F
.L1:        MOV     AL, 0
            INC     AH
@@:         CMP     AH, 25
            JB      @F
            MOV     AH, 24
            ; Сдвиг наверх всего
@@:         MOV     [CS:CUR_XY], AX
            POP     DI BX AX
            RET

; Печать строки DS:SI
; ------------------------------------------------------------------------------
PRINT:      LODSB
            AND     AL, AL
            JE      .END
            CALL    PRN
            JMP     PRINT
.END:       MOV     AX, [CS:CUR_XY]
            CALL    LOCATE.SET
            RET

; Прием нового символа ASCII с клавиатуры в режиме "на лету"; CF=1 принято, CF=0 нет
; ------------------------------------------------------------------------------
INKEY:      IN      AL, 64h
            TEST    AL, 1
            JZ      .END
            STC
            RET
.END:       CLC
            RET
