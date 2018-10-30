#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

#define stackSize unsigned int
#define INT_MIN -2147483648

typedef enum bool_e { false, true } bool;

typedef struct Stack_s
{
    int topIndex;
    stackSize capacity;
    int *array;
} Stack;

Stack *createStack(unsigned int capacity);
void reallocStack(unsigned int newCapacity, Stack *stack);
bool isEmpty(Stack *stack);
bool isFull(Stack *stack);
int pop(Stack *stack);
void push(int data, Stack *stack);
int peek(Stack *stack);

#endif /* STACK_H */
