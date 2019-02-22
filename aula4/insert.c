//Inputing Values to the Program

#include <stdio.h>

main()
{

  int x; /* declaração de uma variável inteira */
  float y;  /* declaração de uma variável real */

  printf ("Entre com o valor de x ");
  scanf("%d",&x);    // This line will ask for the input.

  printf ("Entre com o valor de y ");
  scanf("%f",&y);

  printf ("O valor de x é %d\n",x);
  printf ("O valor de y é %.2f\n",y); // Only shows 2 digits after the comma, 0,00.
}
