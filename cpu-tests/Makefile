.PHONY:  clean image $(ALL).elf

CROSS_COMPILE := loongarch32r-linux-gnusf-
ASFLAGS       += -O0

CC := $(CROSS_COMPILE)gcc
OBJDUMP := $(CROSS_COMPILE)objdump
OBJCOPY := $(CROSS_COMPILE)objcopy
LD := $(CROSS_COMPILE)ld

CFLAGS    += -fdata-sections -ffunction-sections -static
LDFLAGS   += -T ./linker.ld --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start

##IMAGE := $(BUILD_DIR)/$(ALL).c
BUILD_DIR := ./build
DIR := $(shell pwd)

$(ALL).elf:
	mkdir -p $(BUILD_DIR)
	$(CC) ./tests/$(ALL).c -o $(BUILD_DIR)/$(ALL).elf
	@echo + LD "->" $(IMAGE_REL).elf
	@$(LD) $(LDFLAGS) -o $(BUILD_DIR)/$(ALL).elf --start-group $(LINKAGE) --end-group

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
