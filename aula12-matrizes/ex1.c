//  1. Fazer uma função que recebe duas matrizes 2x3 como parâmetros e retorna a média entre todos elementos da matriz soma destas matrizes.

#include <stdio.h>

#define TAM_LIN 2
#define TAM_COL 3

int media_mat(int ma[TAM_LIN][TAM_COL],int mb[TAM_LIN][TAM_COL])
{
  int i,j, mc[TAM_LIN][TAM_COL];

  for(i=0;i<TAM_LIN;i++){
     for(j=0;j<TAM_COL;j++) {
        mc[i][j] = (ma[i][j] + mb[i][j])/2;
          printf("%d\n", mc[i][j]);
     }
  }
}

void main()
{
  int mA[TAM_LIN][TAM_COL]={5,5,17,
                            10,23,12},
      mB[TAM_LIN][TAM_COL]={15,20,34,
                            1,2,3};
 media_mat(mA,mB);


}
