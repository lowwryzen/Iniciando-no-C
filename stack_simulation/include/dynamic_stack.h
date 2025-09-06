#ifndef DYNAMIC_STACK_H
#define DYNAMIC_STACK_H

/*
    Stack Simulation (Linked list Edition)

    A estrutura de dados que vou usar para simular uma stack vai ser a linked list
    Isso vai permitir que ela cresça 'infinitamente' (até o heap acabar)
    Sua desvantagem é o overhead (8 bytes extras do ponteiro para a próxima struct)
*/

typedef struct Stack{
    void *value;
    struct Stack *next;
} Stack;

void dpush(Stack **stack,void *value);
void dpop(Stack *origin, Stack **end);
void dnukeStack(Stack **origin);

#endif