#include <stdio.h>

main()
{
  // Declaring variables
  int R1,R2;
  float serie,paralelo;
  // Input values for R1 e R2
  printf("Entre com R1\n");
  scanf("%f", &R1);
  printf("Entre com R2\n");
  scanf("%f", &R2);

  // Calculating serie

  serie=R1+R2

  // Calculating paralel

  paralelo=(R1*R2)/(R1+R2)

  printf ("O valor da série é %d\n",serie);
  printf ("O valor de x é %d\n",paralelo);

}
