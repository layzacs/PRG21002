// farenheit to celsius converter
#include <stdio.h>

main()
{
  // Declaring variables
  float f,c;
  // Inputing values
  printf("conversor de farenheit para celsius\n");
  printf("Entre com o valor em farenheit:\n");
  scanf("%f",&f);
  // Farenheit to celsius formulae
  c = (f-32)/1.8;
  // Printing result.
  printf("A temperatura correspondente em celsius é de: %f\n",c);
}
