// 5. Refazer o exercício anterior criando uma função onde o vetor é passado como parâmetro e o número de elementos maiores que a média é retornado. Considere o vetor de tamanho 10. 

#include <stdio.h>

int maiores_media_vet(int vetor[10], int soma) {
  
  int i, total;

  for (i=0;i<10;i++) {
    if ((soma/10)<(vetor[i])) {
      total++;
    }
  }
  return total;
}

int main() {
  
  int vet[10];
  int i=0, soma=0;

  while (i<10) {
    printf("Insira vet[%d]:\n", i);
    scanf("%d", &vet[i]);
    soma=soma+(vet[i]);
    i++;
    printf("A soma dos valores é: %d\n", soma);
  }
  
  printf("O número de elementos maiores que a média é: %d", maiores_media_vet(vet, soma));
}
