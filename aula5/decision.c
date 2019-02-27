#include <stdio.h>
 
main()
{
 
  int x,y,z; /* declaração de uma variável inteira */
 
  printf ("Entre com o valor de x ");
  scanf("%d",&x);
 
  printf ("Entre com o valor de y ");
  scanf("%d",&y);
 
  if (y>x) {
     printf("MSG1: y é maior que x\n");
     z = y-x;
     printf("MSG2: Neste caso z =  %d\n", z);
  } 
  else {
     printf("MSG3: y é igual ou menor que x\n");
     z = x-y;
     printf("MSG4: Neste caso z =  %d\n", z);
  }
 
}
