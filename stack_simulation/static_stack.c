#include "static_stack.h"

void spush(S_Stack *stack, void* value){
    stack->value[stack->index] = value;
    stack->cur = stack->value[stack->index];

    stack->index++;
}

void spop(S_Stack *stack){
    stack->value[stack->index] = (void*)0;
    stack->cur = stack->value[--stack->index];
}

void snukeStack(S_Stack *stack){
    stack = (void*)0;
}