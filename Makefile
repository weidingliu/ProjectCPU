
COMMIT_PATH=$(path)
COMMIT_MESSAGE=$(m)

DIR = $(shell pwd)

ifeq ($(COMMIT_PATH),)
COMMIT_PATH:=.
endif
ifeq ($(COMMIT_MESSAGE),)
COMMIT_MESSAGE:=default meassage
endif
gitcommit:
	git add $(COMMIT_PATH)
	git commit -m "$(COMMIT_MESSAGE)"
	git push	

Core_DIR = $(DIR)/core/vsrc
Axi_DIR = $(DIR)/core/axi

OBJ_DIR = $(CHIPLAB_HOME)/IP/myCPU

VSRC += $(shell find $(Core_DIR) -name '*.v' -o -name '*.sv' | grep -v Top.v)
VSRC += $(shell find $(Axi_DIR) -name '*.v' -o -name '*.sv')
VSRC += $(DIR)/core/mycpu_top.v

##OBJS = $(addprefix $(CURRENT_DIR)/,$(notdir $(VSRC)))
update:
	ln -s -f $(VSRC) $(OBJ_DIR)
	
clean_chiplab:
	rm -rf $(OBJ_DIR)/*

count_line:
	@echo "total code line:"
	@git ls-files | xargs cat | wc -l
	@echo "total commit num:"
	@git log --author='liuweidin' --since="2022-01-01" | grep -e 'commit [a-zA-Z0-9]*' | wc -l


.PHONY: gitcommit update clean_chiplab
