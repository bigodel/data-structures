#include "stack.h"

Stack *createStack(stackSize capacity)
{
    Stack *newStack = (Stack *) malloc(sizeof(Stack));

    newStack->topIndex = -1;
    newStack->capacity = capacity;
    newStack->array = (int *) malloc(capacity * sizeof(int));

    return newStack;
}

void reallocStack(stackSize newCapacity, Stack *stack)
{
    /* int topIndex = stack->topIndex; */
    stack->array = (int *) realloc(stack->array, newCapacity * sizeof(int));
    stack->capacity = newCapacity;
    /* stack->topIndex = topIndex; */
}

bool isEmpty(Stack *stack)
{
    if (stack->topIndex == -1)
        return true;
    else
        return false;
}

bool isFull(Stack *stack)
{
    if (stack->topIndex == (int) stack->capacity)
        return true;
    else
        return false;
}

int pop(Stack *stack)
{
    if (isEmpty(stack))
        return INT_MIN;

    // it returns the value and then decrements the variable
    return stack->array[stack->topIndex--];
}

void push(int data, Stack *stack)
{
    if (isFull(stack))
        return;

    // it increments the variable and the assigns the value
    stack->array[++stack->topIndex] = data;
}

int peek(Stack *stack)
{
    if (isEmpty(stack))
        return INT_MIN;

    // just returns the top value
    return stack->array[stack->topIndex];
}
