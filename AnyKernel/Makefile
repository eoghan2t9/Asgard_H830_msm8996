NAME ?=
DEVICE ?=
VERSION ?=

DATE := $(shell date +'%d%m%Y-%H%M')

ZIP := $(NAME)-$(DEVICE)-$(VERSION)-$(DATE).zip

all: $(ZIP)

$(ZIP):
	@echo "Creating ZIP"
	@zip -r9 "$@" anykernel.sh bootloaders/`echo "$(DEVICE)"`/bl.zip Image.gz-dtb META-INF modules patch ramdisk tools
	@md5sum "$@" > "$@.md5" >> /dev/null
	@echo "Done."
	@echo "  _|_|                                                            _|      _|_|_|              _|                                      "
	@echo "_|    _|    _|_|_|    _|_|_|  _|    _|    _|_|_|  _|  _|_|    _|_|_|      _|    _|    _|_|    _|_|_|      _|_|    _|  _|_|  _|_|_|  "  
	@echo "_|_|_|_|  _|_|      _|    _|  _|    _|  _|    _|  _|_|      _|    _|      _|_|_|    _|_|_|_|  _|    _|  _|    _|  _|_|      _|    _|  "
	@echo "_|    _|      _|_|  _|    _|  _|    _|  _|    _|  _|        _|    _|      _|    _|  _|        _|    _|  _|    _|  _|        _|    _| " 
	@echo "_|    _|  _|_|_|      _|_|_|    _|_|_|    _|_|_|  _|          _|_|_|      _|    _|    _|_|_|  _|_|_|      _|_|    _|        _|    _|  "
	@echo "                          _|                                                                                                          "
	@echo "                      _|_|                                                                                                            "


	@if [ -f "$(ZIP)" ]; then \
		echo "Kernel Build Completed."; \
		echo ""; \
		echo ""; \
		echo "Device Info:"; \
		echo "Model: $(DEVICE)"; \
		echo ""; \
		echo "File Info:"; \
		echo "Name: $(ZIP) "; \
		echo "Size: `du -h $(ZIP) | cut -f1` "; \
		echo "MD5:  `md5sum $(ZIP) | cut -d ' ' -f 1` "; \
	else \
		echo "$(ZIP) not found."; \
		echo "Check For Build Errors Above."; \
	fi

clean:
	@rm -vf **.zip*
	@rm -vf Image.gz-dtb
	@echo "Done."
