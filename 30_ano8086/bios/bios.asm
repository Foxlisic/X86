        ORG     0
; ==============================================================================        
INCLUDE "macros.asm"
; ==============================================================================
STA:    STARTUP

        MOV     AL, 17h
        CALL    CLS
        MOV     AX, 0101h
        CALL    LOCATE
        MOV     SI, HW
        CALL    PRINT

        XOR     DI, DI
@@:     IN      AL, 64h
        TEST    AL, 1
        JZ      @B
        IN      AL, 60h
        MOV     AH, 17h
        STOSW
        JMP     @B

        HLT
; ------------------------------------------------------------------------------
INCLUDE "procedure.asm"
INCLUDE "const.asm"
INCLUDE "local.asm"
INCLUDE "int.asm"
; ==============================================================================
        TAIL    32768
