#include <stdio.h>
#include "func.h"
#include "func.c"

int main(){
    char palavra[] = "Bomdia";
    
    criptografar(palavra, 7);
    descriptografar(palavra, 7);

    printf("%s", palavra);
}