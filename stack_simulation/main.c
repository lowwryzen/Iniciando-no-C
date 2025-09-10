#include <stdio.h>

#include "dynamic_stack.h"
#include "static_stack.h"

int main(){
    D_Stack *pilha = NULL;
    D_Stack *org = pilha;

    int valor = 30;

    dpush(&pilha, &valor);
    printf("%i\n", *(int*)(pilha)->value);
    dpop(org, &pilha);

    S_Stack pilha_estatica;

    spush(&pilha_estatica, &valor);
    printf("%i\n", *(int*)(pilha_estatica.cur));
    spop(&pilha_estatica);

    return 0;
}