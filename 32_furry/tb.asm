
            use32
            org     0

t0:         mov     ax, $AAAB
            cmp     ah, al
            je      t0

            mov     esi, sText
            mov     al, [esi]
            sub     al, 'A'
            add     al, 13
            mov     [esi], al
t1:         jmp     t1

sText:      db      "ABCDen-mokken baby haif!",0
