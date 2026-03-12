VLIB="/usr/share/verilator/include"
COMM=$(VLIB)/verilated_threads.cpp $(VLIB)/verilated.cpp
MODS=obj_dir/Vu8086__ALL.a obj_dir/Vvideo__ALL.a -Wno-unused-result

all: ica
ica:
	iverilog -g2005-sv -I../ -DICARUS=1 -o main.qqq tb.v ../u8086.v ../ctl.v
	vvp main.qqq >> /dev/null
vcd:
	gtkwave tb.vcd
wav:
	gtkwave tb.gtkw
bb:
	verilator -I.. --threads 1 -cc ../u8086.v > /dev/null
	verilator -I.. --threads 1 -cc ../video.v > /dev/null
	cd obj_dir && make -f Vu8086.mk > /dev/null
	cd obj_dir && make -f Vvideo.mk > /dev/null
	g++ -Ofast -o tb -I$(VLIB) tb.cc -Wno-unused-result -lSDL2 $(COMM) $(MODS)

clean:
	rm -r obj_dir tb
