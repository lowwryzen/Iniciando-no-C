#ifndef PESSOA_H
#define PESSOA_H

typedef struct{
    char *nome;
    int idade;
} Pessoa;

Pessoa *newPessoa(char *nome, int idade);

void delPessoa(Pessoa *self);
int altPessoa(Pessoa *self, char *nome, int idade);

#endif