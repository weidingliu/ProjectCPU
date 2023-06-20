


COMMIT_PATH=$(path)
COMMIT_MESSAGE=$(m)

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

Core_DIR = /home/liuweiding/ProjectCPU/core/vsrc
Axi_DIR = /home/liuweiding/ProjectCPU/core/axi

OBJ_DIR = $(CHIPLAB_HOME)/IP/myCPU

VSRC += $(shell find $(Core_DIR) -name '*.v' -o -name '*.sv' | grep -v Top.v)
VSRC += $(shell find $(Axi_DIR) -name '*.v' -o -name '*.sv')
VSRC += /home/liuweiding/ProjectCPU/core/mycpu_top.v

##OBJS = $(addprefix $(CURRENT_DIR)/,$(notdir $(VSRC)))
update:
	ln -s -f $(VSRC) $(OBJ_DIR)
	
clean_chiplab:
	rm -rf $(OBJ_DIR)/*


.PHONY: gitcommit update clean_chiplab
