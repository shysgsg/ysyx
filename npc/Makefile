all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --exe --build -j 1 -Wall ./test_our/sim_main.cpp ./test_our/our.v
	ls -l obj_dir
	obj_dir/Vour

include ../Makefile
