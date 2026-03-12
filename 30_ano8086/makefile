VLIB="/usr/share/verilator/include"
COMM=$(VLIB)/verilated_threads.cpp $(VLIB)/verilated.cpp
MODS=obj_dir/Vu8086__ALL.a obj_dir/Vvideo__ALL.a obj_dir/Vps2__ALL.a -Wno-unused-result

all: comp

# Билд тестовой сборки для SDL2
comp: arch
	g++ -Ofast -o comp -I$(VLIB) comp.cc -lSDL2 $(COMM) $(MODS)
	./comp > tb.log

# Билд модулей
arch:
	verilator --threads 1 -cc u8086.v > /dev/null
	verilator --threads 1 -cc video.v > /dev/null
	verilator --threads 1 -cc ps2.v > /dev/null
	cd obj_dir && make -f Vu8086.mk > /dev/null
	cd obj_dir && make -f Vvideo.mk > /dev/null
	cd obj_dir && make -f Vps2.mk > /dev/null

clean:
	rm -r obj_dir tb
