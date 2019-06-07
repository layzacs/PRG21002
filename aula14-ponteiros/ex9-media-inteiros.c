 // Construir uma função usando ponteiros que retorna a média de um vetor de inteiros passado como parâmetro. O tamanho do vetor também deve ser fornecido.
#include <stdio.h>
#include <string.h>

float media_vet(int *vet, int tamanho) {
  int i;
  float soma=0;

  for (i=0;i<tamanho;i++) {
    soma = soma + *vet;
    vet++;
    printf("vet = %d\n", vet);
  }
  printf("soma = %f\n", soma);
  return (soma/tamanho);
}
/* exemplo de uso */

int main(void) {

   int x[10]= {0,1,29,3,42,5,61,7,82,9};
   float media;

   media = media_vet(x,10); /* em media_vet deve ficar a média do vetor */
   printf("media do vetor = %f\n", media);
}
