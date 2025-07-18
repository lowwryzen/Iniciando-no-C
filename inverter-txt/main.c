#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define FILE_ERROR 1
#define MEMORY_ERROR 2
#define ARG_ERROR 3;

int main(int argc, char *argv[]){
  if (argc != 3){
    puts("Use dois arquivos");
    
    return ARG_ERROR;
  }

  FILE *entrada = fopen(argv[1], "rb");
  FILE *saida = fopen(argv[2], "wb");

  if (!entrada || !saida){
    puts("Deu erro nos arquivo bro");

    if (entrada) fclose(entrada);
    if (saida) fclose (saida);

    return FILE_ERROR;
  }

  fseek(entrada, 0, SEEK_END);
  long tamanho = ftell(entrada);
  int lenbuff = tamanho-1;
  rewind(entrada);

  uint8_t *buffer = malloc(tamanho);
  uint8_t *temp = malloc(tamanho);

  if (!buffer || !temp){
    puts("Deu erro na memoria bro");

    return MEMORY_ERROR;
  }

  fread(buffer, 1, tamanho, entrada);

  for(int i=0; i<tamanho; i++){
    temp[lenbuff] = buffer[i];

    lenbuff--;
  }
  
  fwrite(temp, 1, tamanho, saida);

  free(temp);
  free(buffer);

  fclose(entrada);
  fclose(saida);

  printf("Deu certo bro");

  return 0;
}
