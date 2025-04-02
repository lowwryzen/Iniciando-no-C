#include <stdio.h>
#include <string.h>
#include "funcs.h"
#include "funcs.c"

int main(void){
    int num1;
    int num2;

    char operacao[2];

    scanf("%i", &num1);

    scanf("%s", &operacao);

    scanf("%i", &num2);


    if (strcmp(operacao, "+")==0){
        somar(num1, num2);
    } 
    else if (strcmp(operacao, "-")==0)
    {
        subtrair(num1,num2);
    } 
    else if (strcmp(operacao, "x")==0)
    {
        multiplicar(num1,num2);
    } 
    else if (strcmp(operacao, "/")==0)
    {
        if (num1 > 0 && num2 > 0){
            dividir(num1,num2);
        } else{
            printf("Não é possível dividir por zero");
        }
    } 
    else {
        printf("Operação inválida");
    }

    return 0;
}