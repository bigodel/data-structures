# Makefile for the Binary Search Tree
.POSIX:

INC = node.h bst.h
SRC = node.c bst.c main.c
OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -O3 -ansi -pedantic -I. -W -Wall

all: options bst

options:
	@echo "bst build options:"
	@echo "CFLAGS = $(CFLAGS)"
	@echo "CC     = $(CC)"

.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -c $<

node.o: node.h
bst.o: bst.h
main.o: bst.h

bst: $(OBJ)
	$(CC) -o $@ $(OBJ)

clean: clean_obj clean_bin

clean_obj:
	@echo "Removing objects"
	@rm -f $(OBJ)

clean_bin:
	@echo "Removing binary fils"
	@rm -f bst

.PHONY: all options clean clean_obj clean_bin
