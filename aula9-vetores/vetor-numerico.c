#include <stdio.h>
 
main()
{
  // Vetor foi chamado como int, quer dizer que todos os valores do vetor serão números inteiros
  int vet1[5],vet2[5];
  int i;
 
  /* ler da entrada padrão e colocar dados no vetor 1. Multiplicar valor lido por 5 e colocar no vetor 2*/
  for(i=0;i<5;i++) {
     printf("Entre com vet[%d] => ",i);
     scanf("%d",&vet1[i]);
     vet2[i]=vet1[i]*5;
  }
  /* para conferir- vamos imprimir o conteúdo de vet2 */
  for(i=0;i<5;i++)
     printf("vet2[%d] => %d\n",i,vet2[i]);
}
