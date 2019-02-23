// Switching variable values.
#include <stdio.h>

main()
{
  // Declaring variables
  int alfa,beta,gama,delta,alfa_aux;
  // Input values for the four variables (except alfa_aux)
  printf("Entre com alfa:\n");
  scanf("%d",&alfa);
  printf("Entre com beta:\n");
  scanf("%d",&beta);
  printf("Entre com gama:\n");
  scanf("%d",&gama);
  printf("Entre com delta:\n");
  scanf("%d",&delta);
  // Printing before switching values.
  printf ("O valor de alfa (antes da troca) é %d\n",alfa);
  printf ("O valor de beta (antes da troca) é %d\n",beta);
  printf ("O valor de gama (antes da troca) é %d\n",gama);
  printf ("O valor de delta (antes da troca) é %d\n\n",delta);
  // Switching values, note that alfa_aux is just auxiliary, the other ones doesn't need aux to remember their values because of the order that it's happening.
  alfa_aux = alfa;
  alfa = gama;
  gama = beta;
  beta = alfa_aux;
  // Printing switched values.
  printf ("O valor de alfa (depois da troca) é %d\n",alfa);
  printf ("O valor de beta (depois da troca) é %d\n",beta);
  printf ("O valor de gama (depois da troca) é %d\n",gama);
  printf ("O valor de delta (depois da troca) é %d\n",delta);
}
