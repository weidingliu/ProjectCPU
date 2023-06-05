.PHONY:  clean run runvcd all latest $(ALL) Makefile.%
	
DIR := $(shell pwd)
## run 
ALL = $(basename $(notdir $(shell find tests/. -name "*.c")))
RESULT = .result
$(shell > $(RESULT))
COLOR_RED   = \033[1;31m
COLOR_GREEN = \033[1;32m
COLOR_NONE  = \033[0m

#MAINARGS = $(patsubst %.c,%.bin,$(ALL))

all: $(addprefix Makefile., $(ALL)) 
	@echo "" $(ALL)

$(ALL): %: Makefile.%

Makefile.%: tests/%.c latest
	# complier
	@/bin/echo -e "NAME = $*\nSRC += $<\n include ./am/Makefile" > $@
	@ make -s -f $@ image ALL=$(basename $(notdir $<))
	## start testbench
	@if $(MAKE) -C ../testbench simulate IMG=$(DIR)/build/$(patsubst %.c,%.bin,$(notdir $<)); then \
		printf "[%14s] $(COLOR_GREEN)PASS!$(COLOR_NONE)\n" $* >> $(RESULT); \
	else \
		printf "[%14s] $(COLOR_RED)FAIL!$(COLOR_NONE)\n" $* >> $(RESULT); \
	fi
	-@rm -f Makefile.$*

run: all
	@cat $(RESULT)
	@rm $(RESULT)
	
runvcd: 
	@/bin/echo -e "NAME = $(ALL)\nSRC += tests/$(ALL).c\n include ./am/Makefile" > Makefile.$(ALL)
	@ make -s -f Makefile.$(ALL) image ALL=$(basename $(notdir $<))
	$(MAKE) -C ../testbench simulate_vcd IMG=$(DIR)/build/$(ALL).bin
	-@rm -f Makefile.$(ALL)


clean:
	rm -rf Makefile.* build/
