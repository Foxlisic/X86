all: asm ica
asm:
	fasm tb.asm tb.bin
	hexdump -v -e '1/1 "%02X" "\n"' tb.bin > tb.hex
ica:
	iverilog -g2005-sv -DICARUS=1 -o main.qqq tb.v core.v
	vvp main.qqq >> /dev/null
vcd:
	gtkwave tb.vcd
wav:
	gtkwave tb.gtkw
clean:
	rm -r tb
