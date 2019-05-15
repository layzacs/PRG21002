#include <stdio.h>

// A função vai ler um valor, inserindo um valor para cada posição do vetor.
void ler_vet(int aux[5])
{
  int i;
 
  for (i=0;i<5;i++) {
     printf("aux[%d] <== ",i);
     scanf("%d",&aux[i]);
  } 
}


main()
{
   int vet[5], i;
 
   ler_vet(vet);
   for (i=0;i<5;i++)
      printf("vet[%d]=%d\n",i,vet[i]);
}
