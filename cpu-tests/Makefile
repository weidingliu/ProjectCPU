.PHONY:  clean image $(ALL).elf

BUILD_DIR := ./build
$(shell mkdir -p $(BUILD_DIR))
DIR := $(shell pwd)

CROSS_COMPILE := loongarch32r-linux-gnusf-
ASFLAGS       += -O0 -mabi=ilp32d

CC := $(CROSS_COMPILE)gcc
OBJDUMP := $(CROSS_COMPILE)objdump
OBJCOPY := $(CROSS_COMPILE)objcopy
LD := $(CROSS_COMPILE)ld

SRC :=  tests/$(ALL).c am/trm.c 
ASRC := am/start.S
OBJS      = $(addprefix $(BUILD_DIR)/, $(addsuffix .o, $(basename $(SRC))))
OBJS += $(addprefix $(BUILD_DIR)/, $(addsuffix .o, $(basename $(ASRC))))

LIB := $(wildcard $(CHIPLAB_HOME)/toolchains/system_newlib/*.a)
CFLAGS    += -fdata-sections -ffunction-sections -static -mabi=ilp32d -O0 -nostdinc -nostdlib -fno-builtin -D__loongarch32
LDFLAGS   +=-T /home/liuweiding/ProjectCPU/cpu-tests/am/linker.ld --defsym=_pmem_start=0x1C000000 --defsym=_entry_offset=0x0##-Ttext 0x1C000000 
LDFLAGS   += --gc-sections -e _start -static 

LINKAGE := $(LIB) $(OBJS)


##IMAGE := $(BUILD_DIR)/$(ALL).c


$(BUILD_DIR)/%.o: %.c
	mkdir -p $(dir $@) && echo + CC $<
	$(CC) -std=gnu11 $(CFLAGS) -c -o $@ $(realpath $<)
$(BUILD_DIR)/%.o: %.S	
	mkdir -p $(dir $@) && echo + CC $<
	$(CC) $(ASLAGS) -c -o $@ $(realpath $<)

$(ALL).elf: $(OBJS)
	@echo "###########################################"
	@echo "#############start complier################"
	@echo "###########################################"
	@echo + LD "->" $(BUILD_DIR)/$(ALL).elf
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
