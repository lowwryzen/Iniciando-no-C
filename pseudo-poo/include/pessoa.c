#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pessoa.h"

#define STRUCT_ERROR 1

Pessoa *newPessoa(char *nome, int idade){      
    Pessoa *self = malloc(sizeof(Pessoa));       // Alocar memória para struct

    if(!self) return NULL;                       // Retornar nulo caso dê erro

    self->nome = malloc(sizeof(self->nome) + 1); // Alocação de string para torná-la independente

    if (!self->nome) {                           
        free(self);                              // Liberar memória da struct caso dê erro, para evitar memory leak
        return NULL;
    }

    strcpy(self->nome, nome);                    // Copiar string para a parte alocada exclusiva da string
    self->idade = idade;
    self->info = info;

    return self;
}

void delPessoa(Pessoa *self){
    free(self->nome);
    free(self);
}

int altPessoa(Pessoa *self, char *nome, int idade){
    if(!self) return STRUCT_ERROR;                      // Retornar 1 (Código definido para Erro de struct) caso dê erro

    self->nome = realloc(self->nome, strlen(nome) + 1); // Realocar o campo da string para o novo nome
    if(!self->nome) {
        free(self->nome);                               // Novamente liberar a struct para evitar memory leak em caso de erro
        return STRUCT_ERROR;
    }

    strcpy(self->nome, nome);
    self->idade = idade;

    return 0;
}

void info(Pessoa *self){
    printf("Nome: %s\n", self->nome);
    printf("Idade: %i\n", self->idade);
}