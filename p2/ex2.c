// Elaborar uma função que recebe um vetor de inteiros e sua dimensão como parâmetro. Ela deverá retornar a quantidade de números pares do vetor.

#include <stdio.h>

int calcula_par(int x[15], int len) {
  int i, total=0;
  for (i=0;i<len;i++) {
    if (x[i] % 2 == 0) {
      total++;
    }
  }
  return total;
}


int main (void) {
  int x[10]={1,2,5,9,4,3,2,4,10,23};

  printf("A quantidade de números par da matriz é: %d\n", calcula_par(x, 10));
}
