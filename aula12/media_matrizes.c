#include <stdio.h>
 
void main()
{
  int mA[2][3]={ 11,12,13,
                 21,22,23},
      mB[2][3]={1,2,3,
                1,2,3},
      mC[2][3];
  int i,j, soma_ac=0;
  float media;
 
  for(i=0;i<2;i++){
     for(j=0;j<3;j++) {
        mC[i][j] = mA[i][j] + mB[i][j];
        soma_ac = soma_ac + mC[i][j];
     }
  }
  media = (soma_ac/6.0);
  printf("O valor da media eh: %.2f\n", media);
}
