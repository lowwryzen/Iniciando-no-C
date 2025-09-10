/*
    Stack Simulation (Array edition)

    A estrutura de dados que vou usar aqui para simular a stack é o array
    Ela é mais fácil de acessar, mais rápida e comum
    Sua desvantagem é que o tamanho pra ela deve ser fixo, e há apenas um tipo de dado
*/

#ifndef STATIC_STACK_H
#define STATIC_STACK_H

typedef struct{
    void *value[1024];
    void *cur;
    unsigned char index;
} S_Stack;

void spush(S_Stack *stack, void* value);
void spop(S_Stack *stack);
void snukeStack(S_Stack *stack);

#endif