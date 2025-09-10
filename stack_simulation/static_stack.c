#include "static_stack.h"

void spush(S_Stack *stack, void* value){
    static int i = 0;
    stack->index = i;

    stack->value[stack->index] = value;
    stack->cur = stack->value[stack->index];

    i++;
}

void spop(S_Stack *stack){
    stack->value[stack->index] = (void*)0;
    stack->cur = stack->value[--stack->index];
}

void snukeStack(S_Stack *stack){
    stack = (void*)0;
}