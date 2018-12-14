
vpath %.c ./src
vpath %.h ./includes

BUILD_DIR = ./build
CC=gcc

CCFLAGS ?=
LDFLAGS ?=

INC_FLAGS := -I./includes
LDFLAGS += -lmosquitto -lodbc -lpthread -luuid -lm

CFLAGS_DEBUG = -Wall -g -O0

all: prova_struct prova_struct_ptr prova_struct_ptr_all

prova_struct: prova_struct.c
	$(CC) $^  $(CFLAGS_DEBUG) -o $@	

prova_struct_ptr: prova_struct_ptr.c
	$(CC) $^  $(CFLAGS_DEBUG) -o $@	

prova_struct_ptr_all: prova_struct_ptr_all.c
	$(CC) $^  $(CFLAGS_DEBUG) -o $@	

java: src/AkaStruct.java
	javac src/AkaStruct.java -d .

clean:
	rm -f prova_struct prova_struct_ptr prova_struct_ptr_all AkaStruct.class Struct.class

.PHONY: clean all



