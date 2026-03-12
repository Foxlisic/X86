CC=gcc
COPT=-m32 -Os -ffreestanding -nostdlib -fno-pie -mno-sse -static
CCPT=-ffunction-sections -fdata-sections -flto
LOPT=-T main.ld -Wl,--build-id=none -Wl,-z,notext -Wl,--gc-sections
DEPS=nasm.o main.o

all: load dump
load:
	nasm -felf32 -o nasm.o main.asm
	$(CC) $(COPT) -c main.cc -o main.o
	$(CC) $(COPT) $(CCPT) $(DEPS) $(LOPT) -o main.elf
	objcopy -O binary main.elf main.bin
dump:
	objdump -S -M intel main.elf > main.lst
clean:
	rm -f *.elf *.lst *.o *.bin