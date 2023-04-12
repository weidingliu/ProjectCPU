
SO_PATH = $(CHIPLAB_HOME)/toolchains/nemu/la32r-nemu-interpreter-so

CUR_DIR = $(shell pwd)

DIR = $(join $(dir $(CUR_DIR)),core)

VSRC += $(wildcard *.v)

CSRC += $(shell find . -name '*.cpp')

CFLAGS=-CFLAGS "-I $(CUR_DIR)/include" 

VLIB += -y $(DIR)/vsrc/include

include ../core/Makefile

simulate:
	verilator -Wno-fatal --trace -j $(nproc) -compiler clang -cc  $(VSRC)  --top-module Top   --exe $(CSRC) $(LDFLAGS) $(CFLAGS) $(VLIB)


.PHONY: simulate