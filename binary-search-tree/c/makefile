# Makefile for the Binary Search Tree
.POSIX:

INC = node.h bst.h # io.h
SRC = node.c bst.c main.c # io.h
OBJ = $(SRC:.cpp=.o)

CC = cc
CFLAGS = -O3 -std=c++11 -I. -W -Wall

all: options bst

options:
	@echo "bst build options:"
	@echo "CFLAGS = $(CFLAGS)"
	@echo "CC     = $(CC)"

.SUFFIXES: .cpp .o

.cpp.o:
	$(CC) $(CFLAGS) -c $<

node.o: node.h
bst.o: bst.h
# io.o: io.h bst.h
main.o: bst.hpp # io.hpp

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
