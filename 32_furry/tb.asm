
            use32
            org     0

            mov     ebx, $DEADBEEF
            mov     [edx], bl
            mov     eax, [edx]
t1:         jmp     t1

sText:      db      "ABCDen-mokken baby haif!",0
