#include <stdio.h>

#include "func.h"

void criptografar(char array[], int tamanho){
    for (int i=0; i<tamanho; i++){
        array[i] = array[i] + 15; 
    }
}

void descriptografar(char array[], int tamanho){
    for (int i=0; i<tamanho; i++){
        array[i] = array[i] - 15; 
    }
}