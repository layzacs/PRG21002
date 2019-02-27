#include <stdio.h>
 
main()
{
 
  int x; /* declaração de uma variável inteira */
  int y;  /* declaração de uma variável inteira */
 
  printf ("Entre com o valor de x ");
  scanf("%d",&x);
 
  printf ("Entre com o valor de y ");
  scanf("%d",&y);
 
  if (y>x)
     printf("MSG1:y é maior que x\n");
 
 
  if (y>x)
     printf("MSG2:y é maior que x\n");
  else
     printf("MSG3:y é igual ou menor que x\n");
 
}
