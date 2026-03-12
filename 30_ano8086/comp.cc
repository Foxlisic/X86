#include <SDL2/SDL.h>
#include <stdio.h>
#include "const.h"
#include "disasm.cc"
#include "obj_dir/Vvideo.h"
#include "obj_dir/Vu8086.h"
#include "obj_dir/Vps2.h"
// -----------------------------------------------------------------------------
#define WIDTH  640
#define HEIGHT 400
#define SCALE  2
// -----------------------------------------------------------------------------
SDL_Surface*    surface;
SDL_Window*     window;
SDL_Renderer*   renderer;
SDL_Texture*    texture;
SDL_Event       evt;
SDL_Rect        dstRect;
Uint32*         screen;
// -----------------------------------------------------------------------------
int             _hs = 1, _vs = 1, x = 0, y = 0;
Uint32          speed = 0, debug = 0, debugex = 0, tstate = 0;
Uint32          cycles = 0;
unsigned char   kbd[256];
int             kbd_top = 0, kbd_phase = 0, kbd_ticker = 0;
int             kb_status = 0, kb_code = 0, kb_ascii = 0;
int             ps_clock = 1, ps_data = 1;
// -----------------------------------------------------------------------------
Uint16          _ax = 0, _bx = 0, _cx = 0, _dx = 0, _sp = 0, _bp = 0, _si = 0, _di = 0, _ds = 0, _es = 0, _ss = 0;
disasm*         dasm;
// -----------------------------------------------------------------------------
Uint8*          memory;
Vvideo*         video;
Vu8086*         u8086;
Vps2*           ps2;
// -----------------------------------------------------------------------------
void tick();
void pset(int, int, Uint32);
void vga(int, int, int);
void kbd_scancode(int scancode, int release);
void kbd_pop(int& ps_clock, int& ps_data);
// -----------------------------------------------------------------------------

int main(int argc, char** argv)
{
    FILE* fp;

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO)) {
        exit(1);
    }

    dstRect.x = 0;
    dstRect.y = 0;
    dstRect.w = SCALE*WIDTH;
    dstRect.h = SCALE*HEIGHT;

    SDL_ClearError();
    window   = SDL_CreateWindow("Mu-8086", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, dstRect.w, dstRect.h, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
    screen   = (Uint32*) malloc(WIDTH * HEIGHT * sizeof(Uint32));
    texture  = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_BGRA32, SDL_TEXTUREACCESS_STREAMING, WIDTH, HEIGHT);
    SDL_SetTextureBlendMode(texture, SDL_BLENDMODE_NONE);

    Uint32 pticks = 0, counter = 0, i = 1, fsize;

    video   = new Vvideo;
    u8086   = new Vu8086;
    ps2     = new Vps2;
    memory  = (Uint8*) malloc(1024*1024+65536);
    dasm    = new disasm(memory);

    // Загрузка данных
    while (i < argc) {

        if (argv[i][0] == '-') {

            switch (argv[i][1]) {

                // Загрузка BIOS
                case 'b':

                    i++;
                    fp = fopen(argv[i], "rb");
                    if (fp) {

                        fseek(fp, 0, SEEK_END);
                        fsize = ftell(fp);
                        fseek(fp, 0, SEEK_SET);
                        fread(memory + 1024*1024 - fsize, 1, fsize, fp);
                        fclose(fp);

                    } else {

                        printf("FILE NOT FOUND: %s\n", argv[i]);
                        return 1;
                    }

                    break;

                case 'd': debug   = 1; break;
                case 'D': debugex = 1; break;
            }

            i++;
        }
    }

    // Сброс процессора на изначальное состояние
    u8086->ce    = 1;
    u8086->_cs   = 0xF000;
    u8086->_ip   = 0xFFF0;
    u8086->clock = 0;
    u8086->rst_n = 0; u8086->eval();
    u8086->clock = 1; u8086->eval();
    u8086->rst_n = 1;

    // Сброс контроллера клавиатуры
    ps2->cmd     = 0;
    ps2->dat     = 0;
    ps2->reset_n = 0;
    ps2->clock   = 0; ps2->eval();
    ps2->clock   = 1; ps2->eval();
    ps2->reset_n = 1;

    for (;;) {

        // Прием событий
        while (SDL_PollEvent(& evt)) {

            // Событие выхода
            switch (evt.type) {

                case SDL_QUIT:

                    free(screen);
                    free(memory);

                    SDL_DestroyTexture(texture);
                    SDL_DestroyRenderer(renderer);
                    SDL_DestroyWindow(window);
                    SDL_Quit();
                    return 0;

                 case SDL_KEYDOWN:

                    kbd_scancode(evt.key.keysym.scancode, 0);
                    break;

                case SDL_KEYUP:

                    kbd_scancode(evt.key.keysym.scancode, 1);
                    break;
            }
        }

        // Обновление 60 раз в секунду
        Uint32 nticks = SDL_GetTicks();

        // Выполнить тактовый пакет
        for (int i = 0; i < 25000; i++) { tick(); counter++; }

        Uint32 diff = nticks - pticks;

        // Кадр был обработан успешно
        if (diff >= 20) {

            SDL_UpdateTexture       (texture, NULL, screen, WIDTH * sizeof(Uint32));
            SDL_SetRenderDrawColor  (renderer, 0, 0, 0, 0);
            SDL_RenderClear         (renderer);
            SDL_RenderCopy          (renderer, texture, NULL, & dstRect);
            SDL_RenderPresent       (renderer);

            pticks = nticks;
            counter = 0;

            SDL_Delay(1);
        }
    }
}

// Один такт 25 мгц
void tick()
{
    cycles++;

    // Чтение и запись в память
    /* WR */ if (u8086->w) { memory[u8086->a & 0xFFFFF] = u8086->o; } /* RD */ u8086->i = memory[u8086->a & 0xFFFFF];

    // Запись в порты значений
    if (u8086->pw) {

        switch (u8086->a & 0xFFFF)
        {
            case 0xF0: video->cursor = (video->cursor & 0xF00) + u8086->o;     break;
            case 0xF1: video->cursor = (video->cursor & 0x0FF) + u8086->o*256; break;
        }
    }

    // Читать данные с порта
    if (u8086->pr) {

        switch (u8086->a & 0xFFFF)
        {
            case 0x60: u8086->pi = kb_code; break;
            case 0x61: u8086->pi = kb_ascii; break;
            case 0x64: u8086->pi = kb_status; kb_status &= ~3; break;
        }

        // printf("%x %x\n", u8086->a, u8086->pi);
    }

    // Расширенный дебаг
    if (debugex) {
        printf("%08X :: %05X [m=%d, %02X] i=%02X, o=%02X, w=%d, T=%d:%d\n", cycles, u8086->a, u8086->c0, u8086->opcache, u8086->i, u8086->o, u8086->w, u8086->t, u8086->m);
    }

    if (u8086->c0) {

        if (u8086->i == 0x9B) debug = 1; // FWAIT

        if (debug)
        {
            Uint16 ax = u8086->ax, bx = u8086->bx;
            Uint16 cx = u8086->cx, dx = u8086->dx;
            Uint16 sp = u8086->sp, bp = u8086->bp;
            Uint16 si = u8086->si, di = u8086->di;
            Uint16 es = u8086->es, ss = u8086->ss, ds = u8086->ds;

            // Расширенная информация о регистрах
            if (u8086->i == 0x90) {

                printf("%04X:%04X [%08X]   :: REGISTER ::\n", u8086->cs, u8086->ip, tstate);
                printf("\n  ax%c%04X  bx%c%04X  cx%c%04X  dx%c%04X\n  sp%c%04X  bp%c%04X  si%c%04X  di%c%04X\n  es%c%04X  ss%c%04X  ds%c%04X\n\n",
                _ax == ax ? ' ' : '#', ax,
                _bx == bx ? ' ' : '#', bx,
                _cx == cx ? ' ' : '#', cx,
                _dx == dx ? ' ' : '#', dx,
                _sp == sp ? ' ' : '#', sp,
                _bp == bp ? ' ' : '#', bp,
                _si == si ? ' ' : '#', si,
                _di == di ? ' ' : '#', di,
                _es == es ? ' ' : '#', es,
                _ss == ss ? ' ' : '#', ss,
                _ds == ds ? ' ' : '#', ds
                );

            } else {

                dasm->disassemble(16*u8086->cs + u8086->ip);
                printf("%08X :: %04X:%04X %s\n", cycles, u8086->cs, u8086->ip, dasm->dis_row);
            }

            _ax = ax; _bx = bx; _cx = cx; _dx = dx;
            _sp = sp; _bp = bp; _si = si; _di = di;
            _es = es; _ss = ss; _ds = ds;
        }

        if (u8086->i == 0xF4) debug = 0; // HLT
    }

    // Читать данные из таблицы шрифтов и видеопамяти
    video->i = memory[video->a + 0xB8000];
    video->f = font  [video->a & 0x0FFF];

    // Исполнительные блоки
    u8086->clock = 0; u8086->eval();
    u8086->clock = 1; u8086->eval();

    video->clock = 0; video->eval();
    video->clock = 1; video->eval();

    // Обработка клавиатуры
    kbd_pop(ps_clock, ps_data);

    ps2->ps_clk = ps_clock;
    ps2->ps_dat = ps_data;

    ps2->clock = 0; ps2->eval();
    ps2->clock = 1; ps2->eval();

    // Обработка получения СКАН-кода
    if (ps2->hit)   { kb_status |= 1; kb_code  = ps2->kbd;   }
    if (ps2->kdone) { kb_status |= 2; kb_ascii = ps2->ascii; }

    vga(video->hs, video->vs, (video->r*16)*65536 + (video->g*16)*256 + (video->b*16));

    tstate++;
}

// Установка точки
void pset(int x, int y, Uint32 cl)
{
    if (x < 0 || y < 0 || x >= WIDTH || y >= HEIGHT) {
        return;
    }

    screen[WIDTH*y + x] = cl;
}

// 640 x 400
void vga(int hs, int vs, int color)
{
    if (hs) x++;

    // Отслеживание изменений HS/VS
    if (_hs == 0 && hs == 1) { x = 0; y++; }
    if (_vs == 0 && vs == 1) { x = 0; y = 0; }

    // Сохранить предыдущее значение
    _hs = hs;
    _vs = vs;

    // Вывод на экран
    pset(x-48, y-35, color);
}

// -----------------------------------------------------------------------------

void kbd_push(int data)
{
    if (kbd_top >= 255) return;
    kbd[kbd_top] = data;
    kbd_top++;
}

// Вызов процедуры на каждом такте
void kbd_pop(int& ps_clock, int& ps_data)
{
    // В очереди нет клавиш для нажатия
    if (kbd_top == 0) return;

    // 25000000/2000 = 12.5 kHz Очередной полутакт для PS/2
    if (++kbd_ticker >= 2000) {

        ps_clock = kbd_phase & 1;

        switch (kbd_phase) {

            // Старт-бит [=0]
            case 0: case 1: ps_data = 0; break;

            // Бит четности
            case 18: case 19:

                ps_data = 1;
                for (int i = 0; i < 8; i++) ps_data ^= !!(kbd[0] & (1 << i));
                break;

            // Стоп-бит [=1]
            case 20: case 21: ps_data = 1; break;

            // Небольшая задержка между нажатиями клавиш
            case 22: case 23:
            case 24: case 25:

                ps_clock = 1;
                ps_data  = 1;
                break;

            // Завершение
            case 26:

                // Удалить символ из буфера
                for (int i = 0; i < kbd_top - 1; i++)
                    kbd[i] = kbd[i+1];

                kbd_top--;
                kbd_phase  = 0;
                kbd_ticker = 0;
                ps_clock   = 1;
                return;

            // Отсчет битов от 0 до 7
            // 0=2,3   | 1=4,5   | 2=6,7   | 3=8,9
            // 4=10,11 | 5=12,13 | 6=14,15 | 7=16,17
            default:

                ps_data = !!(kbd[0] & (1 << ((kbd_phase >> 1) - 1)));
                break;
        }

        kbd_ticker = 0;
        kbd_phase++;
    }
}

// Сканирование нажатой клавиши
// https://ru.wikipedia.org/wiki/Скан-код
void kbd_scancode(int scancode, int release)
{
    switch (scancode) {

        // Коды клавиш A-Z
        case SDL_SCANCODE_A: if (release) kbd_push(0xF0); kbd_push(0x1C); break;
        case SDL_SCANCODE_B: if (release) kbd_push(0xF0); kbd_push(0x32); break;
        case SDL_SCANCODE_C: if (release) kbd_push(0xF0); kbd_push(0x21); break;
        case SDL_SCANCODE_D: if (release) kbd_push(0xF0); kbd_push(0x23); break;
        case SDL_SCANCODE_E: if (release) kbd_push(0xF0); kbd_push(0x24); break;
        case SDL_SCANCODE_F: if (release) kbd_push(0xF0); kbd_push(0x2B); break;
        case SDL_SCANCODE_G: if (release) kbd_push(0xF0); kbd_push(0x34); break;
        case SDL_SCANCODE_H: if (release) kbd_push(0xF0); kbd_push(0x33); break;
        case SDL_SCANCODE_I: if (release) kbd_push(0xF0); kbd_push(0x43); break;
        case SDL_SCANCODE_J: if (release) kbd_push(0xF0); kbd_push(0x3B); break;
        case SDL_SCANCODE_K: if (release) kbd_push(0xF0); kbd_push(0x42); break;
        case SDL_SCANCODE_L: if (release) kbd_push(0xF0); kbd_push(0x4B); break;
        case SDL_SCANCODE_M: if (release) kbd_push(0xF0); kbd_push(0x3A); break;
        case SDL_SCANCODE_N: if (release) kbd_push(0xF0); kbd_push(0x31); break;
        case SDL_SCANCODE_O: if (release) kbd_push(0xF0); kbd_push(0x44); break;
        case SDL_SCANCODE_P: if (release) kbd_push(0xF0); kbd_push(0x4D); break;
        case SDL_SCANCODE_Q: if (release) kbd_push(0xF0); kbd_push(0x15); break;
        case SDL_SCANCODE_R: if (release) kbd_push(0xF0); kbd_push(0x2D); break;
        case SDL_SCANCODE_S: if (release) kbd_push(0xF0); kbd_push(0x1B); break;
        case SDL_SCANCODE_T: if (release) kbd_push(0xF0); kbd_push(0x2C); break;
        case SDL_SCANCODE_U: if (release) kbd_push(0xF0); kbd_push(0x3C); break;
        case SDL_SCANCODE_V: if (release) kbd_push(0xF0); kbd_push(0x2A); break;
        case SDL_SCANCODE_W: if (release) kbd_push(0xF0); kbd_push(0x1D); break;
        case SDL_SCANCODE_X: if (release) kbd_push(0xF0); kbd_push(0x22); break;
        case SDL_SCANCODE_Y: if (release) kbd_push(0xF0); kbd_push(0x35); break;
        case SDL_SCANCODE_Z: if (release) kbd_push(0xF0); kbd_push(0x1A); break;

        // Цифры
        case SDL_SCANCODE_0: if (release) kbd_push(0xF0); kbd_push(0x45); break;
        case SDL_SCANCODE_1: if (release) kbd_push(0xF0); kbd_push(0x16); break;
        case SDL_SCANCODE_2: if (release) kbd_push(0xF0); kbd_push(0x1E); break;
        case SDL_SCANCODE_3: if (release) kbd_push(0xF0); kbd_push(0x26); break;
        case SDL_SCANCODE_4: if (release) kbd_push(0xF0); kbd_push(0x25); break;
        case SDL_SCANCODE_5: if (release) kbd_push(0xF0); kbd_push(0x2E); break;
        case SDL_SCANCODE_6: if (release) kbd_push(0xF0); kbd_push(0x36); break;
        case SDL_SCANCODE_7: if (release) kbd_push(0xF0); kbd_push(0x3D); break;
        case SDL_SCANCODE_8: if (release) kbd_push(0xF0); kbd_push(0x3E); break;
        case SDL_SCANCODE_9: if (release) kbd_push(0xF0); kbd_push(0x46); break;

        // Keypad
        case SDL_SCANCODE_KP_0: if (release) kbd_push(0xF0); kbd_push(0x70); break;
        case SDL_SCANCODE_KP_1: if (release) kbd_push(0xF0); kbd_push(0x69); break;
        case SDL_SCANCODE_KP_2: if (release) kbd_push(0xF0); kbd_push(0x72); break;
        case SDL_SCANCODE_KP_3: if (release) kbd_push(0xF0); kbd_push(0x7A); break;
        case SDL_SCANCODE_KP_4: if (release) kbd_push(0xF0); kbd_push(0x6B); break;
        case SDL_SCANCODE_KP_5: if (release) kbd_push(0xF0); kbd_push(0x73); break;
        case SDL_SCANCODE_KP_6: if (release) kbd_push(0xF0); kbd_push(0x74); break;
        case SDL_SCANCODE_KP_7: if (release) kbd_push(0xF0); kbd_push(0x6C); break;
        case SDL_SCANCODE_KP_8: if (release) kbd_push(0xF0); kbd_push(0x75); break;
        case SDL_SCANCODE_KP_9: if (release) kbd_push(0xF0); kbd_push(0x7D); break;

        // Специальные символы
        case SDL_SCANCODE_GRAVE:        if (release) kbd_push(0xF0); kbd_push(0x0E); break;
        case SDL_SCANCODE_MINUS:        if (release) kbd_push(0xF0); kbd_push(0x4E); break;
        case SDL_SCANCODE_EQUALS:       if (release) kbd_push(0xF0); kbd_push(0x55); break;
        case SDL_SCANCODE_BACKSLASH:    if (release) kbd_push(0xF0); kbd_push(0x5D); break;
        case SDL_SCANCODE_LEFTBRACKET:  if (release) kbd_push(0xF0); kbd_push(0x54); break;
        case SDL_SCANCODE_RIGHTBRACKET: if (release) kbd_push(0xF0); kbd_push(0x5B); break;
        case SDL_SCANCODE_SEMICOLON:    if (release) kbd_push(0xF0); kbd_push(0x4C); break;
        case SDL_SCANCODE_APOSTROPHE:   if (release) kbd_push(0xF0); kbd_push(0x52); break;
        case SDL_SCANCODE_COMMA:        if (release) kbd_push(0xF0); kbd_push(0x41); break;
        case SDL_SCANCODE_PERIOD:       if (release) kbd_push(0xF0); kbd_push(0x49); break;
        case SDL_SCANCODE_SLASH:        if (release) kbd_push(0xF0); kbd_push(0x4A); break;
        case SDL_SCANCODE_BACKSPACE:    if (release) kbd_push(0xF0); kbd_push(0x66); break;
        case SDL_SCANCODE_SPACE:        if (release) kbd_push(0xF0); kbd_push(0x29); break;
        case SDL_SCANCODE_TAB:          if (release) kbd_push(0xF0); kbd_push(0x0D); break;
        case SDL_SCANCODE_CAPSLOCK:     if (release) kbd_push(0xF0); kbd_push(0x58); break;
        case SDL_SCANCODE_LSHIFT:       if (release) kbd_push(0xF0); kbd_push(0x12); break;
        case SDL_SCANCODE_LCTRL:        if (release) kbd_push(0xF0); kbd_push(0x14); break;
        case SDL_SCANCODE_LALT:         if (release) kbd_push(0xF0); kbd_push(0x11); break;
        case SDL_SCANCODE_RSHIFT:       if (release) kbd_push(0xF0); kbd_push(0x59); break;
        case SDL_SCANCODE_RETURN:       if (release) kbd_push(0xF0); kbd_push(0x5A); break;
        case SDL_SCANCODE_ESCAPE:       if (release) kbd_push(0xF0); kbd_push(0x76); break;
        case SDL_SCANCODE_NUMLOCKCLEAR: if (release) kbd_push(0xF0); kbd_push(0x77); break;
        case SDL_SCANCODE_KP_MULTIPLY:  if (release) kbd_push(0xF0); kbd_push(0x7C); break;
        case SDL_SCANCODE_KP_MINUS:     if (release) kbd_push(0xF0); kbd_push(0x7B); break;
        case SDL_SCANCODE_KP_PLUS:      if (release) kbd_push(0xF0); kbd_push(0x79); break;
        case SDL_SCANCODE_KP_PERIOD:    if (release) kbd_push(0xF0); kbd_push(0x71); break;
        case SDL_SCANCODE_SCROLLLOCK:   if (release) kbd_push(0xF0); kbd_push(0x7E); break;

        // F1-F12 Клавиши
        case SDL_SCANCODE_F1:   if (release) kbd_push(0xF0); kbd_push(0x05); break;
        case SDL_SCANCODE_F2:   if (release) kbd_push(0xF0); kbd_push(0x06); break;
        case SDL_SCANCODE_F3:   if (release) kbd_push(0xF0); kbd_push(0x04); break;
        case SDL_SCANCODE_F4:   if (release) kbd_push(0xF0); kbd_push(0x0C); break;
        case SDL_SCANCODE_F5:   if (release) kbd_push(0xF0); kbd_push(0x03); break;
        case SDL_SCANCODE_F6:   if (release) kbd_push(0xF0); kbd_push(0x0B); break;
        case SDL_SCANCODE_F7:   if (release) kbd_push(0xF0); kbd_push(0x83); break;
        case SDL_SCANCODE_F8:   if (release) kbd_push(0xF0); kbd_push(0x0A); break;
        case SDL_SCANCODE_F9:   if (release) kbd_push(0xF0); kbd_push(0x01); break;
        case SDL_SCANCODE_F10:  if (release) kbd_push(0xF0); kbd_push(0x09); break;
        case SDL_SCANCODE_F11:  if (release) kbd_push(0xF0); kbd_push(0x78); break;
        case SDL_SCANCODE_F12:  if (release) kbd_push(0xF0); kbd_push(0x07); break;

        // Расширенные клавиши
        case SDL_SCANCODE_LGUI:         kbd_push(0xE0); if (release) kbd_push(0xF0); kbd_push(0x1F); break;
        case SDL_SCANCODE_RGUI:         kbd_push(0xE0); if (release) kbd_push(0xF0); kbd_push(0x27); break;
        case SDL_SCANCODE_APPLICATION:  kbd_push(0xE0); if (release) kbd_push(0xF0); kbd_push(0x2F); break;
        case SDL_SCANCODE_RCTRL:        kbd_push(0xE0); if (release) kbd_push(0xF0); kbd_push(0x14); break;
        case SDL_SCANCODE_RALT:         kbd_push(0xE0); if (release) kbd_push(0xF0); kbd_push(0x11); break;
        case SDL_SCANCODE_KP_DIVIDE:    kbd_push(0xE0); if (release) kbd_push(0xF0); kbd_push(0x4A); break;
        case SDL_SCANCODE_KP_ENTER:     kbd_push(0xE0); if (release) kbd_push(0xF0); kbd_push(0x5A); break;

        case SDL_SCANCODE_INSERT:       kbd_push(0xE0); if (release) kbd_push(0xF0); kbd_push(0x70); break;
        case SDL_SCANCODE_HOME:         kbd_push(0xE0); if (release) kbd_push(0xF0); kbd_push(0x6C); break;
        case SDL_SCANCODE_END:          kbd_push(0xE0); if (release) kbd_push(0xF0); kbd_push(0x69); break;
        case SDL_SCANCODE_PAGEUP:       kbd_push(0xE0); if (release) kbd_push(0xF0); kbd_push(0x7D); break;
        case SDL_SCANCODE_PAGEDOWN:     kbd_push(0xE0); if (release) kbd_push(0xF0); kbd_push(0x7A); break;
        case SDL_SCANCODE_DELETE:       kbd_push(0xE0); if (release) kbd_push(0xF0); kbd_push(0x71); break;

        case SDL_SCANCODE_UP:           kbd_push(0xE0); if (release) kbd_push(0xF0); kbd_push(0x75); break;
        case SDL_SCANCODE_DOWN:         kbd_push(0xE0); if (release) kbd_push(0xF0); kbd_push(0x72); break;
        case SDL_SCANCODE_LEFT:         kbd_push(0xE0); if (release) kbd_push(0xF0); kbd_push(0x6B); break;
        case SDL_SCANCODE_RIGHT:        kbd_push(0xE0); if (release) kbd_push(0xF0); kbd_push(0x74); break;

        // Клавиша PrnScr
        case SDL_SCANCODE_PRINTSCREEN: {

            if (release == 0) {

                kbd_push(0xE0); kbd_push(0x12);
                kbd_push(0xE0); kbd_push(0x7C);

            } else {

                kbd_push(0xE0); kbd_push(0xF0); kbd_push(0x7C);
                kbd_push(0xE0); kbd_push(0xF0); kbd_push(0x12);
            }

            break;
        }

        // Клавиша Pause
        case SDL_SCANCODE_PAUSE: {

            kbd_push(0xE1);
            kbd_push(0x14); if (release) kbd_push(0xF0); kbd_push(0x77);
            kbd_push(0x14); if (release) kbd_push(0xF0); kbd_push(0x77);
            break;
        }
    }
}
