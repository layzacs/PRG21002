#include <stdio.h>

// Função media_nums vai pegar os valores de num1, num2 e num3, calcula a média dos valores e retorna o valor médio calculado. 
float media_nums(float num1, float num2, float num3)
{
  float media_local;
 
  media_local = (num1 + num2 + num3)/3;
  return media_local;
}

// Captura num1, num2 e num3, chama a função media_nums, que vai retornar o valor médio;.
main()
{
  float media, aux1, aux2, aux3;
 
  printf("\nEntre com numero 1: ");  
  scanf ("%f",&aux1);
 
  printf("\nEntre com numero 2: ");  
  scanf ("%f",&aux2);
 
  printf("\nEntre com numero 3: ");  
  scanf ("%f",&aux3);
 
  media = media_nums(aux1, aux2, aux3);
  printf ("\nmedia dos 3 numeros é %f\n", media);
  
  // daria pra fazer printf("media dos 3 números é %f\n", media_nums(aux1, aux2. aux4)
}
