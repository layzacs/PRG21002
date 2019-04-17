#include <stdio.h>
 
#define TAM_LIN 2
#define TAM_COL 3
 
void somar_mat(int aA[TAM_LIN][TAM_COL],int aB[TAM_LIN][TAM_COL], int cC[TAM_LIN][TAM_COL])
{
  int i,j;
 
  for(i=0;i<TAM_LIN;i++){
     for(j=0;j<TAM_COL;j++) {
        cC[i][j] = aA[i][j] + aB[i][j];
     }
  }
}
 
void main()
{
  int mA[TAM_LIN][TAM_COL]={ 11,12,13,
                             21,22,23},
      mB[TAM_LIN][TAM_COL]={1,2,3,
                            1,2,3},
      mC[TAM_LIN][TAM_COL];
 
 somar_mat(mA,mB,mC);
 
}
