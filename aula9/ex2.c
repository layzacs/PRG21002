#include <stdio.h>

int main(void) {

  int vet[10],total, soma=0, i;
  
  for (i=0;i<10;i++) {
  printf("Insira o valor de vet[%d]:\n", i);
  scanf("%d", &vet[i]);
  soma=soma+vet[i];
  }
  printf("A média é: %d\n", (soma/10));
}
