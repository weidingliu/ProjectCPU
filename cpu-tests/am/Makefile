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

SRC +=   am/trm.c # tests/$(ALL).c
ASRC := am/start.S
OBJS      = $(addprefix $(BUILD_DIR)/, $(addsuffix .o, $(basename $(SRC))))
OBJS += $(addprefix $(BUILD_DIR)/, $(addsuffix .o, $(basename $(ASRC))))

LIB := $(wildcard $(CHIPLAB_HOME)/toolchains/system_newlib/*.a)
CFLAGS    += -fdata-sections -ffunction-sections -mabi=ilp32d -O0 -D__loongarch32 -D_KERNEL -I $(CHIPLAB_HOME)/toolchains/system_newlib/
LDFLAGS   +=-T $(DIR)/am/linker.ld --defsym=_pmem_start=0x1C000000 --defsym=_entry_offset=0x0##-Ttext 0x1C000000 
LDFLAGS   += --gc-sections -e _start -static 

LINKAGE := $(LIB) $(OBJS)

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
	
	
