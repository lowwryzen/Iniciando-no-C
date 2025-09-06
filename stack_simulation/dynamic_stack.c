#include <stdlib.h>

#include "dynamic_stack.h"

void dpush(Stack **stack,void *value){
    if (!(*stack)) {
        *stack = malloc(sizeof(Stack));
        if (!stack) return;

        (*stack)->value = value;
        (*stack)->next = NULL;
    }
    else {
        (*stack)->next = malloc(sizeof(Stack));
        if (!(*stack)->next) return;

        *stack = (*stack)->next;
        (*stack)->value = value;
    }
}

void dpop(Stack *origin, Stack **stack_main){
    Stack *temp = origin;

    while(temp){
        if (temp->next == *stack_main){
            free(*stack_main);
            *stack_main = temp;
            break;
        }
        temp = temp->next;
    }
}

void dnukeStack(Stack **origin){
    Stack **temp = origin;

    while(*temp){
        free(*temp);
        *temp = (*temp)->next;
    }
}