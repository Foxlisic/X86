[bits 32]

global  _start
extern  main
extern  _stack_top
extern  _sidata, _sdata, _edata, _sbss, _ebss

section .text

_start:

        mov     esp, _stack_top

        ; Копирование данных
        mov     esi, _sidata
        mov     edi, _sdata
        mov     ecx, _edata
        sub     ecx, _sdata
        jz      _nodata
        rep     movsb
_nodata:

        ; Начало BSS
        mov     ecx, _ebss
        sub     ecx, _sbss
        jz      _nobss
        xor     eax, eax
        rep     stosb
_nobss: call    main
_fin:   jmp     _fin

section .note.GNU-stack noalloc noexec nowrite progbits
