#include <stdio.h>
#include <math.h>

main () {
  float r1, r2, a, b, c, delta;

  printf("Calculador de raízes de uma equação de segundo grau.\n");

  printf("Insira o valor de a:\n");
  scanf ("%f",&a);
  printf("Insira o valor de b:\n");
  scanf ("%f",&b);
  printf("Insira o valor de c:\n");
  scanf ("%f",&c);

  // delta
  delta = (b*b)-(4*a*c);

  if (delta == 0) {
    r1 = (-b)/(2*a);
    r2 = r1;
    printf("A equação possui duas raízes iguais: %f\n", r2);
  }
  else if (delta < 0) {
    printf("Esta equação não possui raizes reais.\n");
  }
  else {
    r1 = ((-b)+sqrt(delta))/(2*a);
    r2 = ((-b)-sqrt(delta))/(2*a);
    printf("As raízes da equação são %f (r1) e %f (r2)\n", r1, r2);
  }
}
