#include "stack.h"

int main()
{
    Stack stack = *createStack(100);

    push(10, &stack);
    push(15, &stack);

    printf("stack[%i]: %i\n", stack.topIndex, peek(&stack));

    pop(&stack);

    printf("stack[%i]: %i\n", stack.topIndex, peek(&stack));

    reallocStack(200, &stack);

    printf("stack's max capacity: %i\n", stack.capacity);

    printf("stack[%i]: %i\n", stack.topIndex, peek(&stack));

    return 0;
}
