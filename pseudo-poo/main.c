#include <stdio.h>

#include "pessoa.h"

int main(){
    Pessoa *john = newPessoa("John", 27);

    printf("Pessoa antes: %s, %i\n", john->nome, john->idade);

    altPessoa(john, "nhoJ", 72);

    printf("Pessoa depois: %s, %i", john->nome, john->idade);

    delPessoa(john);

    return 0;
}