
            use32
            org     0

            mov     ebx, $DEAD0000
            dec     bx
            dec     sp
t1:         jmp     near $BABACAFE

sText:      db      "ABCDen-mokken baby haif!",0
