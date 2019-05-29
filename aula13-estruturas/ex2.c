// Implementar uma função que retorne o módulo de um número complexo.
#include <stdio.h>

struct num_complexo {
  int real;
  int imaginario;
};

struct num_complexo modulo_complexo(struct num_complexo x) {


  if (x.real < 0) {
    x.real = x.real*(-1);
  }

  if (x.imaginario < 0) {
    x.imaginario = x.imaginario*(-1);
  }

  return x;
}

int main(void) {

  struct num_complexo alfa = {3,-2};

  printf("O número inicial é %d %di\n", alfa.real, alfa.imaginario);

  modulo_complexo(alfa);

  printf("%d\n", alfa.imaginario);

  printf("O módulo do número é %d %di\n", alfa.real, alfa.imaginario);

  return 0;
}
