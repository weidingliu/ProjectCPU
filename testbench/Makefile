
SO_PATH = $(CHIPLAB_HOME)/toolchains/nemu/la32r-nemu-interpreter-so
CUR_DIR = $(shell pwd)
DIR = $(join $(dir $(CUR_DIR)),core)

VSRC += $(wildcard *.v)
CSRC += $(wildcard *.cpp)
CFLAGS=-CFLAGS "-I $(CUR_DIR)/include" ##-CFLAGS "-D SO_PATH="$(SO_PATH)"" #-CFLAGS -Wstack-usage=4096
VLIB += -y $(DIR)/vsrc/include
BUILD_DIR := ./build
##CDEFINE := 

include ../core/Makefile

simulate:
	mkdir -p $(BUILD_DIR)
	verilator -Wno-fatal  --Mdir $(BUILD_DIR) -j $(nproc) -compiler clang -cc  $(VSRC) --top-module Top --exe $(CSRC) $(VLIB) $(LDFLAGS) $(CFLAGS) 
	$(MAKE) -C $(BUILD_DIR) -f VTop.mk VTop
	@echo "======================================================"
	@echo "compile finish start simulate"
	@echo "======================================================"
	$(BUILD_DIR)/VTop $(SO_PATH)
	@echo "======================================================"
	@echo "END"
	@echo "======================================================"
simulate_vcd:
	mkdir -p $(BUILD_DIR)
	verilator -Wno-fatal --trace  --Mdir $(BUILD_DIR) -j $(nproc) -compiler clang -cc  $(VSRC) --top-module Top --exe $(CSRC) $(VLIB) $(LDFLAGS) $(CFLAGS) \
    -CFLAGS "-D WTRACE"
	$(MAKE) -C $(BUILD_DIR) -f VTop.mk VTop
	$(BUILD_DIR)/VTop $(SO_PATH)
	gtkwave waveform.vcd



clean:
	rm -rf $(BUILD_DIR)

.PHONY: simulate clean