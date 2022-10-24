all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	export PRJ_PATH=$(shell pwd)/..
	export DESIGN=top
	#verilator --cc --exe --build -j 1 -Wall ./test_our/sim_main.cpp ./test_our/our.v
	#ls -l obj_dir
	#obj_dir/Vour
	verilator -Wall --cc --exe --build ./test_our/sim_main.cpp ./test_our/our.v --trace
	./test_our/obj_dir/Vour
	gtkwave ./wave.vcd
	
	# Makefile for Verilator
	#
	#all:
	#	@echo "Verification based on Verilator"
	#
	#cmp:
	#	verilator -Wno-fatal top.v main.cpp --top-module $(DESIGN) --cc --trace --exe
	#	make -C obj_dir -f V$(DESIGN).mk V$(DESIGN)
	#
	#run:
	#	./obj_dir/V$(DESIGN)
	#
	#wave:
	#	gtkwave wave.vcd &
	#
	#clean:
	#	@rm -rf obj_dir wave.vcd

include ../Makefile
