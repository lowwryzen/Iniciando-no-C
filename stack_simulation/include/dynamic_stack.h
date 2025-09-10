/*
    Stack Simulation (Linked list Edition)

    A estrutura de dados que vou usar para simular uma stack vai ser a linked list
    Isso vai permitir que ela cresça 'infinitamente' (até o heap acabar)
    Sua desvantagem é o overhead (8 bytes extras do ponteiro para a próxima struct)
*/

#ifndef DYNAMIC_STACK_H
#define DYNAMIC_STACK_H


typedef struct Stack{
    void *value;
    struct Stack *next;
} D_Stack;

void dpush(D_Stack **stack,void *value);
void dpop(D_Stack *origin, D_Stack **end);
void dnukeStack(D_Stack **origin);

#endif