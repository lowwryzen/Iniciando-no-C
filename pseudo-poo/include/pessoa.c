#include <stdlib.h>
#include <string.h>

#include "pessoa.h"

#define STRUCT_ERROR 1

Pessoa *newPessoa(char *nome, int idade){
    Pessoa *self = malloc(sizeof(Pessoa));

    if(!self) return NULL;

    self->nome = malloc(sizeof(self->nome));

    if (!self->nome) return NULL;

    strcpy(self->nome, nome);
    self->idade = idade;

    return self;
}

void delPessoa(Pessoa *self){
    free(self->nome);
    free(self);
}

int altPessoa(Pessoa *self, char *nome, int idade){
    if(!self) return STRUCT_ERROR;

    self->nome = realloc(self->nome, strlen(nome) + 1);
    
    if(!self->nome) return STRUCT_ERROR;

    strcpy(self->nome, nome);
    self->idade = idade;

    return 0;
}