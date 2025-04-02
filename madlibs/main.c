#include <stdio.h>

int main(void){
    char palavra1[20];
    char palavra2[20];
    char palavra3[20];

    scanf("%s", palavra1);
    scanf("%s", palavra2);
    scanf("%s", palavra3);

    printf("lowwryzen está %s\n", palavra1);
    printf("Ele vai ganhar %s por mês\n", palavra2);
    printf("E está aprendendo %s\n", palavra3);
}