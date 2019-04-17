#include <stdio.h>
 
#define MAX_LIN 2
#define MAX_COL 3
 
void main()
{
  int mA[MAX_LIN][MAX_COL]={ 11,12,13,
                             21,22,23},
      mB[MAX_LIN][MAX_COL]={1,2,3,
                            1,2,3},
      mC[MAX_LIN][MAX_COL];
  int i,j;
 
  for(i=0;i<MAX_LIN;i++){
     for(j=0;j<MAX_COL;j++) {
        mC[i][j] = mA[i][j] + mB[i][j];
     }
  }
 
}
