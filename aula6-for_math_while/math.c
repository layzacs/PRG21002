// To compile this .c: You'll need to call the math.h this way:  gcc ex1.c -o ex1 -lm

#include <stdio.h>
#include <math.h> // There she is!

main()
{

  float x,y; /* declaração de duas variáveis reais */

  printf ("Entre com o valor de x ");
  scanf("%f",&x);

  y = sqrtf(x);
  printf ("Raiz de x = %.2lf", y); // %.2lf is for long float, this way it will return the value with more precision.
}
