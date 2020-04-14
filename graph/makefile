# Makefile for the Graph data structure
.POSIX:

INC = node.h # graph.h
SRC = node.c main.c # graph.c
OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -O3 -ansi -pedantic -I. -W -Wall

all: options graph

options:
	@echo "graph build options:"
	@echo "CFLAGS = $(CFLAGS)"
	@echo "CC     = $(CC)"

.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -c $<

node.o: node.h
# graph.o: graph.h
main.o: node.h

graph: $(OBJ)
	$(CC) -o $@ $(OBJ)

clean: clean_obj clean_bin

clean_obj:
	@echo "Removing objects"
	@rm -f $(OBJ)

clean_bin:
	@echo "Removing binary fils"
	@rm -f bst

.PHONY: all options clean clean_obj clean_bin
