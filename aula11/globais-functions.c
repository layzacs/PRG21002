#include <stdio.h>
 
float media; /* Variável GLOBAL */
 
void media_nums(float num1, float num2, float num3)
{
  media = (num1 + num2 + num3)/3;
  return;
}
 
main()
{
  float aux1, aux2, aux3; /* Variáveis LOCAIS */
 
  printf("\nEntre com numero 1: ");  
  scanf ("%f",&aux1);
 
  printf("\nEntre com numero 2: ");  
  scanf ("%f",&aux2);
 
  printf("\nEntre com numero 3: ");  
  scanf ("%f",&aux3);
 
  media_nums(aux1, aux2, aux3);
  printf ("\nmedia dos 3 numeros é %f\n", media);
}
