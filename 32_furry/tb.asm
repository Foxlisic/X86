
            use32
            org     0

            mov     eax, 0xDEADBEEF
            mov      ax, 0xDADE
            mov      dx, 0xF00D
            mov     eax, sText
t1:         jmp     t1

sText:      db      "Bokken-mokken baby haif!",0
