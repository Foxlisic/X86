
            use32
            org     0

            add     al, [sText]
t1:         jmp     t1

sText:      db      "ABCDen-mokken baby haif!",0
