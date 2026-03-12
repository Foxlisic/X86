#include <verilated.h>
#include <stdlib.h>
#include "obj_dir/Vu8086.h"
// -----------------------------------------------------------------------------
Vu8086* cpu;
// -----------------------------------------------------------------------------
void regdump()
{
    printf(" ax: %04X | bx: %04X | cx: %04X | dx: %04X\n", cpu->ax, cpu->bx, cpu->cx, cpu->dx);
    printf(" sp: %04X | bp: %04X | si: %04X | di: %04X\n", cpu->sp, cpu->bp, cpu->si, cpu->di);
    printf(" es: %04X | cs: %04X | ss: %04X | ds: %04X\n", cpu->es, cpu->cs, cpu->ss, cpu->ds);
    printf(" ip: %04X\n", cpu->ip);
    printf(" fl: %03X\n\n", cpu->flags);
}
// -----------------------------------------------------------------------------
int main(int argc, char** argv)
{
    char fname[256];
    char in[256];

    char CHR;
    char STR[32];
    int  INT, PTR, LOC;
    int  idx = 0;
    int  m0_been, eoi_been;

    unsigned char memory[1024*1024];

    Verilated::commandArgs(argc, argv);

    cpu = new Vu8086;
    cpu->ce = 1;

    sprintf(fname, "tests_tb/%s.txt", argv[1]);

    FILE* fp = fopen(fname, "r");
    if (fp) {

        while (!feof(fp)) {

            fgets(in, 250, fp);

            int count = sscanf(in, "%c %s %d", &CHR, STR, &INT);

            // printf("(%c : %s : %d)\n", CHR, STR, INT);

            switch (CHR) {

                case 'X': return 0;

                // Вывести текущую тестируемую строку
                case 'N':

                    printf("%d :: %s", idx++, in);
                    break;

                // Перезапуск, исполнение одной инструкции
                case '+':

                    // Сброс и защелкивание данных на выходе процессора
                    cpu->ce    = 1;
                    cpu->clock = 0;
                    cpu->rst_n = 0;
                    cpu->eval();

                    cpu->clock = 1;
                    cpu->eval();
                    cpu->rst_n = 1;

                    do {

                        // Чтение из памяти
                        if (cpu->w) memory[cpu->a] = cpu->o;
                        cpu->i = memory[cpu->a];

                        // printf("[%05x] %02X => %02X %d\n", cpu->a, cpu->i, cpu->o, cpu->w);

                        m0_been  = cpu->m0;
                        eoi_been = cpu->eoi;

                        // Исполнение такта
                        cpu->clock = 0; cpu->eval();
                        cpu->clock = 1; cpu->eval();

                        // Новая инструкция
                        if (m0_been == 0 && cpu->m0) {
                            break;
                        }

                        // Конец инструкции
                        if (eoi_been == 0 && cpu->eoi && cpu->m0) {
                            break;
                        }

                        // regdump();
                    }
                    // Выход на позитивном фронте
                    while (1);

                    // while (m0_been || !cpu->m0);

                    break;

                // Сверка памяти
                case 'm':

                    sscanf(in, "%c %d %d", &CHR, &PTR, &INT);

                    if (memory[PTR] != INT) {

                        printf("# %05X | %d <=> %d\n", PTR, memory[PTR], INT);
                        return 1;
                    }

                    break;

                // Сверка регистров
                case 'r':

                    LOC = 0;

                    switch (STR[1]) {

                        // ax, bx, cx, dx
                        case 'x':

                            switch (STR[0]) {
                                case 'a': LOC = cpu->ax; break;
                                case 'b': LOC = cpu->bx; break;
                                case 'c': LOC = cpu->cx; break;
                                case 'd': LOC = cpu->dx; break;
                            }

                            break;

                        // bp, sp, ip
                        case 'p':

                            switch (STR[0]) {
                                case 'b': LOC = cpu->bp; break;
                                case 's': LOC = cpu->sp; break;
                                case 'i': LOC = cpu->ip; break;
                            }

                            break;

                        // si, di
                        case 'i':

                            switch (STR[0]) {
                                case 's': LOC = cpu->si; break;
                                case 'd': LOC = cpu->di; break;
                            }

                            break;

                        // es, cs, ds, ds
                        case 's':

                            switch (STR[0]) {
                                case 'e': LOC = cpu->es; break;
                                case 'c': LOC = cpu->cs; break;
                                case 's': LOC = cpu->ss; break;
                                case 'd': LOC = cpu->ds; break;
                            }

                            break;

                        // flags
                        case 'l':

                            LOC  = cpu->flags & 0xFFF;
                            INT &= 0xFFF;
                            break;
                    }

                    if (LOC != INT) {
                        printf("# %s | %04X <=> %04X\n", STR, LOC, INT);
                        return 1;
                    }

                    break;

                // Назначить регистры
                case 'R':

                    switch (STR[1]) {

                        // ax, bx, cx, dx
                        case 'x':

                            switch (STR[0]) {
                                case 'a': cpu->_ax = INT; break;
                                case 'b': cpu->_bx = INT; break;
                                case 'c': cpu->_cx = INT; break;
                                case 'd': cpu->_dx = INT; break;
                            }

                            break;

                        // bp, sp, ip
                        case 'p':

                            switch (STR[0]) {
                                case 'b': cpu->_bp = INT; break;
                                case 's': cpu->_sp = INT; break;
                                case 'i': cpu->_ip = INT; break;
                            }

                            break;

                        // si, di
                        case 'i':

                            switch (STR[0]) {
                                case 's': cpu->_si = INT; break;
                                case 'd': cpu->_di = INT; break;
                            }

                            break;

                        // es, cs, ds, ds
                        case 's':

                            switch (STR[0]) {
                                case 'e': cpu->_es = INT; break;
                                case 'c': cpu->_cs = INT; break;
                                case 's': cpu->_ss = INT; break;
                                case 'd': cpu->_ds = INT; break;
                            }

                            break;

                        // flags
                        case 'l':

                            cpu->_flags = INT & 0xFFF;
                            break;
                    }

                    break;

                // Назначить память
                case 'M':

                    sscanf(in, "%c %d %d", &CHR, &PTR, &INT);
                    memory[PTR] = INT;
                    break;
            }
        }
    }
}
