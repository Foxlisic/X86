
            use32
            org     0

            ;mov     esi, sText
            mov     ebp, 5
            mov     esi, [esp+2*ebp]
t1:         jmp     t1

sText:      db      "ABCDen-mokken baby haif!",0
