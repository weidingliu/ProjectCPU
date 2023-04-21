.PHONY:  clean image $(ALL).elf

CROSS_COMPILE := loongarch32r-linux-gnusf-
ASFLAGS       += -O0

CC := $(CROSS_COMPILE)gcc
OBJDUMP := $(CROSS_COMPILE)objdump
OBJCOPY := $(CROSS_COMPILE)objcopy
LD := $(CROSS_COMPILE)ld

LIB := $(wildcard $(CHIPLAB_HOME)/toolchains/system_newlib/*.a $(CHIPLAB_HOME)/toolchains/system_newlib/*.o)
CFLAGS    += -fdata-sections -ffunction-sections -static
LDFLAGS   +=-T $(CHIPLAB_HOME)/toolchains/system_newlib/pmon.ld --defsym=_pmem_start=0x1C000000 --defsym=_entry_offset=0x0##-Ttext 0x1C000000 
LDFLAGS   += --gc-sections -e _start

LINKAGE := $(LIB)

##IMAGE := $(BUILD_DIR)/$(ALL).c
BUILD_DIR := ./build
DIR := $(shell pwd)

$(ALL).elf:
	mkdir -p $(BUILD_DIR)
	@echo $(LIB)
	$(CC) ./tests/$(ALL).c -o $(BUILD_DIR)/$(ALL).o
	@echo + LD "->" $(BUILD_DIR)/$(ALL).elf
	@$(LD) $(LDFLAGS) -o $(BUILD_DIR)/$(ALL).elf --start-group $(LINKAGE) $(BUILD_DIR)/$(ALL).o--end-group

image: $(ALL).elf
	$(OBJDUMP) -d $(BUILD_DIR)/$(ALL).elf > $(BUILD_DIR)/$(ALL).txt
	@echo + OBJCOPY "->" $(BUILD_DIR)/$(ALL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(BUILD_DIR)/$(ALL).elf $(BUILD_DIR)/$(ALL).bin
	
run: image
	@echo $(DIR)
	$(MAKE) -C ../testbench simulate IMG=$(DIR)/build/$(ALL).bin
runvcd: image
	$(MAKE) -C ../testbench simulate_vcd IMG=$(DIR)/build/$(ALL).bin


clean:
	rm -rf Makefile.* build/
