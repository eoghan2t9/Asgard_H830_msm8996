NAME ?=
DEVICE ?=
VERSION ?=

DATE := $(shell date +'%d%m%Y-%H%M')

ZIP := $(NAME)-$(DEVICE)-$(VERSION)-$(DATE).zip

EXCLUDE := Makefile README.md *.git* "*"*.zip*

all: $(ZIP)

$(ZIP):
	@echo "Creating ZIP: $(ZIP)"
	@zip -r9 "$@" . -x $(EXCLUDE) >> /dev/null
	@echo "Generating MD5..."
	@md5sum "$@" > "$@.md5"
	@cat "$@.md5"
	@echo "Done."
	@echo "  _|_|                                                            _|      _|_|_|              _|                                      "
	@echo "_|    _|    _|_|_|    _|_|_|  _|    _|    _|_|_|  _|  _|_|    _|_|_|      _|    _|    _|_|    _|_|_|      _|_|    _|  _|_|  _|_|_|  "  
	@echo "_|_|_|_|  _|_|      _|    _|  _|    _|  _|    _|  _|_|      _|    _|      _|_|_|    _|_|_|_|  _|    _|  _|    _|  _|_|      _|    _|  "
	@echo "_|    _|      _|_|  _|    _|  _|    _|  _|    _|  _|        _|    _|      _|    _|  _|        _|    _|  _|    _|  _|        _|    _| " 
	@echo "_|    _|  _|_|_|      _|_|_|    _|_|_|    _|_|_|  _|          _|_|_|      _|    _|    _|_|_|  _|_|_|      _|_|    _|        _|    _|  "
	@echo "                          _|                                                                                                          "
	@echo "                      _|_|                                                                                                            "

clean:
	@rm -vf **.zip*
	@echo "Done."
