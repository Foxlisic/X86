
            use32
            org     0

            mov     [edx-1], dword $aabb1234
            hlt

            mov     esi, sText
            mov     al, [esi]
            sub     al, 'A'
            add     al, 13
            mov     [esi], al
t1:         jmp     t1

sText:      db      "ABCDen-mokken baby haif!",0
