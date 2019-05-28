//Implementar uma estrutura que permita representar um número complexo no formato retangular. Em adição, implemente uma função que permita somar dois números complexos retornando um número complexo com o valor da soma.
#include <stdio.h>

struct num_imaginario {
  float real, imaginario;
};

float soma_complexo(struct num_imaginario x, struct num_imaginario y){
  struct num_imaginario final;

  final.real = x.real + y.real;

  final.imaginario = x.imaginario + y.imaginario;

  return printf("A soma dos dois números é %2.f + %2.fi\n", final.real, final.imaginario);

}

int main(void) {
  struct num_imaginario alfa;
  struct num_imaginario beta;

  printf("Entre com a parte real do primeiro número:\n");
  scanf ("%f", &alfa.real);

  printf("Entre com a parte imaginária do primeiro número:\n");
  scanf("%f", &alfa.imaginario);

  printf("Entre com a parte imaginária do segundo número:\n");
  scanf("%f", &beta.real);

  printf("Entre com a parte imaginária do segundo número:\n");
  scanf("%f", &beta.imaginario);

  printf("O primeiro número é %2.f + %2.fi\n", alfa.real, alfa.imaginario);

  printf("O segundo número é %2.f + %2.fi\n", beta.real, beta.imaginario);

  soma_complexo(alfa, beta);

  return 0;

}
