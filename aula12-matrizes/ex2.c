//  2. 

#include <stdio.h>

int det_mat(int ma[3][3]) {
  int det, a, b;
  
  a = ((ma[0][0])*(ma[1][1])*(ma[2][2])) + ((ma[0][1])*(ma[1][2])*(ma[2][0])) + ((ma[0][2])*(ma[1][0])*(ma[2][1]));
  
  b = (-(ma[0][2])*(ma[1][1])*(ma[2][0]))-((ma[0][1])*(ma[1][0])*(ma[2][2]))-((ma[0][0])*(ma[1][2])*(ma[2][1]));
  
  printf("%d e %d\n", a, b);
  det = a + b ;
  return det;  
}


int main() {
  int mat[3][3], i=0, j=0;

  for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
      printf("Entre com o valor de mat[%d][%d]\n", i, j);
      scanf("%d", &mat[i][j]);
    }
  }
  printf("O determinante da matriz é: %d\n", det_mat(mat));
}
