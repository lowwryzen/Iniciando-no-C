#ifndef PESSOA_H
#define PESSOA_H

typedef struct Pessoa{
    char *nome;
    int idade;

    void (*info) (struct Pessoa*);
} Pessoa;

Pessoa *newPessoa(char *nome, int idade);           // Função que simula um construtor

void delPessoa(Pessoa *self);                       // Função para deletar a struct Pessoa
int altPessoa(Pessoa *self, char *nome, int idade); // Alterar os dados da pessoa

void info(Pessoa *self);                            // Mostrar as informações de cada campo

#endif