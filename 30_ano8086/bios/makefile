all:
	fasm bios.asm bios.bin
	php ../bin2mif.php 32 bios.bin ../de0/bios.mif
	../comp -b bios.bin > bios.log
