// Implementar uma função que retorne o módulo de um número complexo.
#include <stdio.h>


int main(void) {

  struct num_complexo {
    int real;
    int imaginario;
  };

  struct num_complexo alfa = {3,(-2)};

  printf("O número inicial é %d + (%di)\n", alfa.real, alfa.imaginario);

  if (alfa.real < 0) {
    alfa.real = alfa.real*(-1);
  }

  if (alfa.imaginario < 0) {
    alfa.imaginario = alfa.imaginario*(-1);
  }

  printf("O módulo do número é %d + %di\n", alfa.real, alfa.imaginario);

  return 0;
}
