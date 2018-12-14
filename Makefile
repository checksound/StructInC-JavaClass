
vpath %.c ./src
vpath %.h ./includes

BUILD_DIR = ./build
CC=gcc

CCFLAGS ?=
LDFLAGS ?=

INC_FLAGS := -I./includes
LDFLAGS += -lmosquitto -lodbc -lpthread -luuid -lm

CFLAGS_DEBUG = -Wall -g -O0

all: example_struct example_struct_pointer example_struct_heap

example_struct: example_struct.c
	$(CC) $^  $(CFLAGS_DEBUG) -o $(BUILD_DIR)/$@	

example_struct_pointer: example_struct_pointer.c
	$(CC) $^  $(CFLAGS_DEBUG) -o $(BUILD_DIR)/$@	

example_struct_heap: example_struct_heap.c
	$(CC) $^  $(CFLAGS_DEBUG) -o $(BUILD_DIR)/$@	

java: src/AkaStruct.java
	javac src/AkaStruct.java -d $(BUILD_DIR)

clean:
	rm -f $(BUILD_DIR)/example_struct $(BUILD_DIR)/example_struct_pointer $(BUILD_DIR)/example_struct_heap $(BUILD_DIR)/AkaStruct.class $(BUILD_DIR)/Struct.class

.PHONY: clean all



