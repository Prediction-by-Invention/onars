BASE_DIR := $(CURDIR)/bin
DESIRED_DIR := $(abspath $(START_DIR))
BUILD_SCRIPT = ./scripts/build.sh
NANO_BUILD_SCRIPT = ./scripts/build_nano.sh
OUTPUT = ./bin/onars
NANO_OUTPUT = ./bin/onars_nano
RULE_FILE = src/RuleTable.c

.PHONY: all chdir build clean file_exists

.IGNORE: build

chdir:
	$(shell cd $(BASE_DIR))

file_exists = $(shell [ -e "$1" ] && echo "yes" || echo "no")

build:
	echo "Build started..."
	$(shell $(BUILD_SCRIPT))
	@if [ "$(call file_exists,$(OUTPUT))" = "yes" ]; then \
		echo "######## Build successful! ########"; \
	else \
		echo "######## Build failed! Please check ignored errors! ########"; \
	fi

clean:
	rm -f $(OUTPUT)
	rm -f $(RULE_FILE)


