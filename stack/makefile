# Makefile for the Binary Search Tree
.POSIX:

SRC = stack.c main.c

CC = cc
CFLAGS = -O3 -ansi -pedantic -I. -W -Wall

all: options stack

options:
	@echo "bst build options:"
	@echo "CFLAGS = $(CFLAGS)"
	@echo "CC     = $(CC)"

stack: $(SRC)
	$(CC) -o $@ $(SRC)

clean: clean_bin

clean_bin:
	@echo "Removing binary files"
	@rm -f stack

.PHONY: all options clean clean_bin
