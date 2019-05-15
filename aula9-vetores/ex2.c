#include <stdio.h>

int main(void) {

  int vet[10],total, soma=0, i;
  
  while (i<10) {
  printf("Insira o valor de vet[%d]:\n", i);
  scanf("%d", &vet[i]);
  soma=soma+vet[i];
  i++;
  }
  printf("A média é: %d\n", (soma/10));
}
