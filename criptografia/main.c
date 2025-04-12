#include <stdio.h>
#include "func.h"

int main(){
    char palavra[] = "Bomdia";
    
    criptografar(palavra, 7);
    descriptografar(palavra, 7);

    printf("%s", palavra);
}