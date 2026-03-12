ENTRY(_start)

MEMORY
{
    ROM (rx)  : ORIGIN = 0x008000, LENGTH = 32K
    RAM (rwx) : ORIGIN = 0x100000, LENGTH = 1M
}

SECTIONS
{
    /* Код программы и константы (в ROM) */
    .text :
    {
        KEEP(*(.text._start)) /* Гарантируем, что _start будет первым */
        *(.text*)             /* Все остальные функции */
        *(.rodata*)           /* Константы */
    } > ROM

    /* Инициализированные данные */
    .data :
    {
        _sdata = .;           /* Начало секции в RAM */
        *(.data*)
        _edata = .;           /* Конец секции в RAM */
    } > RAM AT > ROM

    /* Физический адрес начала данных в ROM */
    _sidata = LOADADDR(.data);

    /* Неинициализированные данные */
    .bss :
    {
        _sbss = .;
        *(COMMON)
        *(.bss*)
        _ebss = .;
    } > RAM

    /DISCARD/ :
    {
        *(.note.gnu.build-id)
        *(.note.ABI-tag)
        *(.comment)
    }

    /* Определяем вершину стека (в конце RAM) */
    _stack_top = ORIGIN(RAM) + LENGTH(RAM);
}
