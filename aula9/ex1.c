// 1. Implementar um programa em C para ler 10 números reais (float) para um vetor. Usar o comando while. 

#include <stdio.h>

int main(void) {
  
  float vet[10];
  int i=0;

  while (i<10) {
    printf("Insira vet[%d]:\n", i);
    scanf("%f", &vet[i]);
    i++;
  }
}
