

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




.PHONY: gitcommit
