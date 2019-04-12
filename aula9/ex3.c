// 3. Modificar o exercício anterior para computar a quantidade de números do vetor que estão acima da média. 

#include <stdio.h>

int main(void) {

  int vet[10],total, soma=0, i;
  
  for (i=0;i<10;i++) {
  printf("Insira o valor de vet[%d]:\n", i);
  scanf("%d", &vet[i]);
  soma=soma+vet[i];
  }
  for (i=0;i<10;i++) {
    if ((soma/10)<vet[i]) {
      total++;
    }
  }
  printf("A quantidade de numeros maiores que a média é: %d\n", total);

}
