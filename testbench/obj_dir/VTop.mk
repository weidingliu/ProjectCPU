# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VTop.mk

default: VTop

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VTop
# Module prefix (from --prefix)
VM_MODPREFIX = VTop
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I /home/liuweiding/ProjectCPU/testbench/include \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	difftest \
	memory \
	VTop \
	VTop__Dpi \
	VTop__Syms \
	VTop__Trace__0 \
	VTop__Trace__0__Slow \
	VTop___024root__DepSet_h0d2e5939__0 \
	VTop___024root__DepSet_h0d2e5939__0__Slow \
	VTop___024root__Slow \
	VTop___024unit__DepSet_h1b4533a7__0__Slow \
	VTop___024unit__DepSet_hd7ebdb33__0 \
	VTop___024unit__Slow \
	sim_main \
	testbench \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	. \
	./obj_dir \


### Default rules...
# Include list of all generated classes
include VTop_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

difftest.o: ./difftest.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
memory.o: ./memory.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
VTop.o: ./obj_dir/VTop.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
VTop__Dpi.o: ./obj_dir/VTop__Dpi.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
VTop__Syms.o: ./obj_dir/VTop__Syms.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
VTop__Trace__0.o: ./obj_dir/VTop__Trace__0.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
VTop__Trace__0__Slow.o: ./obj_dir/VTop__Trace__0__Slow.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
VTop___024root__DepSet_h0d2e5939__0.o: ./obj_dir/VTop___024root__DepSet_h0d2e5939__0.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
VTop___024root__DepSet_h0d2e5939__0__Slow.o: ./obj_dir/VTop___024root__DepSet_h0d2e5939__0__Slow.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
VTop___024root__Slow.o: ./obj_dir/VTop___024root__Slow.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
VTop___024unit__DepSet_h1b4533a7__0__Slow.o: ./obj_dir/VTop___024unit__DepSet_h1b4533a7__0__Slow.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
VTop___024unit__DepSet_hd7ebdb33__0.o: ./obj_dir/VTop___024unit__DepSet_hd7ebdb33__0.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
VTop___024unit__Slow.o: ./obj_dir/VTop___024unit__Slow.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sim_main.o: ./sim_main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
testbench.o: ./testbench.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
VTop: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
