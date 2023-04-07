

COMMIT_PATH=$(path) 
COMMIT_MESSAGE=$(m)

gitcommit:
	git add $(COMMIT_PATH)
	git commit -m "$(COMMIT_MESSAGE)"
	git push	




.PHONY: git_commit
