#include <stdio.h>
#include <math.h>

main () {
  // Declarando as variáveis
  float r1, r2, a, b, c, delta;

  printf("Calculador de raízes de uma equação de segundo grau.\n");

  printf("Insira o valor de a:\n");
  scanf ("%f",&a);
  printf("Insira o valor de b:\n");
  scanf ("%f",&b);
  printf("Insira o valor de c:\n");
  scanf ("%f",&c);

  // Calculando o delta separadamente, para fazer as próximas etapas de acordo com o seu resultado.
  delta = (b*b)-(4*a*c);

  // Quando o delta é igual a zero, a equação possui duas raízes iguais.
  if (delta == 0) {
    r1 = (-b)/(2*a);
    r2 = r1;
    printf("A equação possui duas raízes iguais: %f\n", r2);
  }
  // Quando o delta é menor que zero, as raízes não são reais.
  else if (delta < 0) {
    printf("Esta equação não possui raizes reais.\n");
  }
  // Caso final, quando o delta dá um número positivo, existem duas raízes iguais.
  else {
    r1 = ((-b)+sqrt(delta))/(2*a);
    r2 = ((-b)-sqrt(delta))/(2*a);
    printf("As raízes da equação são %f (r1) e %f (r2)\n", r1, r2);
  }
}
