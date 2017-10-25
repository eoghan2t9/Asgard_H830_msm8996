NAME ?= Asgard-Reborn-lge
DEVICE ?=
VERSION ?= 6.5

DATE := $(shell date +'%Y%m%d-%H%M')

ZIP := $(NAME)-$(DEVICE)-$(VERSION)-$(DATE).zip

EXCLUDE := Makefile README.md *.git* "*"*.zip*

all: $(ZIP)

$(ZIP):
	@echo "Creating ZIP: $(ZIP)"
	@zip -r9 "$@" . -x $(EXCLUDE)
	@echo "Generating MD5..."
	@md5sum "$@" > "$@.md5"
	@cat "$@.md5"
	@echo "Done."

clean:
	@rm -vf **.zip*
	@echo "Done."
