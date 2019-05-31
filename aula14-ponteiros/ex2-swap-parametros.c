#include <stdio.h>


void swap(int *inicial, int *final) {
  int i;
  i = *final;
  *final = *inicial;
  *inicial = i;
}

int main(void) {
  int a=5, b=10;

  printf("Valor inicial de a = %d, valor inicial de b = %d\n", a, b);

  swap(&a, &b);

  printf("Valor final de a = %d, valor final de b = %d\n", a, b);

  return (0);
}
