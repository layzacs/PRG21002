#include <stdio.h>

main()
{
  // Declaring variables
  float r1,r2,serie,paralelo;
  // Input values for r1 e r2
  printf("Entre com r1:\n");
  scanf("%f",&r1);
  printf("Entre com r2:\n");
  scanf("%f",&r2);
  // Calculating serie
  serie = r1+r2;
  // Calculating paralel
  paralelo = (r1*r2)/(r1+r2);
  printf ("O valor da série é %f\n",serie);
  printf ("O valor de x é %f\n",paralelo);
}
