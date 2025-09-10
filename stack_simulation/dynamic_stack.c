#include <stdlib.h>

#include "dynamic_Stack.h"

void dpush(D_Stack **stack,void *value){
    if (!(*stack)) {
        *stack = malloc(sizeof(D_Stack));
        if (!stack) return;

        (*stack)->value = value;
        (*stack)->next = NULL;
    }
    else {
        (*stack)->next = malloc(sizeof(D_Stack));
        if (!(*stack)->next) return;

        *stack = (*stack)->next;
        (*stack)->value = value;
    }
}

void dpop(D_Stack *origin, D_Stack **stack_main){
    D_Stack *temp = origin;

    while(temp){
        if (temp->next == *stack_main){
            free(*stack_main);
            *stack_main = temp;
            break;
        }
        temp = temp->next;
    }
}

void dnukeStack(D_Stack **origin){
    D_Stack **temp = origin;

    while(*temp){
        free(*temp);
        *temp = (*temp)->next;
    }
}