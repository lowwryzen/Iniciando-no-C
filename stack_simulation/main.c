#include <stdio.h>

#include "dynamic_stack.h"


int main(){
    Stack *pilha = NULL;
    Stack *org = pilha;

    int valor = 30;

    dpush(&pilha, &valor);

    printf("%i", *(int*)(pilha)->value);

    dpop(org, &pilha);

    return 0;
}