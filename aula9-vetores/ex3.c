// 3. Modificar o exercício anterior para computar a quantidade de números do vetor que estão acima da média. 

#include <stdio.h>

int main(void) {

  int vet[10],total, soma=0, i=0, n=0;
  
  while (i<10) {
  printf("Insira o valor de vet[%d]:\n", i);
  scanf("%d", &vet[i]);
  soma=soma+vet[i];
  i++;
  }
  while (n<10) {
    if ((soma/10)<vet[n]) {
      total++;
  
    }
    n++;
  }
  printf("A quantidade de numeros maiores que a média é: %d\n", total);
}
