TOPNAME = ysyx_22050368_top
# NXDC_FILES = constr/top.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert  --trace

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")


# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
LDFLAGS += -lSDL2 -lSDL2_image

$(BIN): $(VSRCS) $(CSRCS)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		-I./vsrc/rtl/core --top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default
	 # @echo "Write this Makefile by your self."

run: $(BIN)
	@$^
	./build/ysyx_22050368_top
	gtkwave waveform.vcd

clean:
	rm -rf $(BUILD_DIR)


sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	export PRJ_PATH=$(shell pwd)/..
	export DESIGN=top
	
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
