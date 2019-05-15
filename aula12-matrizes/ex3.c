// 3. Implementar um programa para ler duas matrizes (matA e matB) e multiplicá-las, colocando o resultado em uma matriz matC. Assumir dimensões de matA e matB de 2x3 e 3x4 respectivamente.
#include <stdio.h>

int multi_matriz(int matA[2][3], int matB[3][4], int matC[2][4]) {
  int i=0, j=0;

  matC[0][0] = ((matA[0][0])*(matB[0][0])) + ((matA[0][1])*(matB[1][0])) + ((matA[0][2])*(matB[2][0]));
  matC[0][1] = ((matA[0][0])*(matB[0][1])) + ((matA[0][1])*(matB[1][1])) + ((matA[0][2])*(matB[2][1]));
  matC[0][2] = ((matA[0][0])*(matB[0][2])) + ((matA[0][1])*(matB[1][2])) + ((matA[0][2])*(matB[2][2]));
  matC[0][3] = ((matA[0][0])*(matB[0][3])) + ((matA[0][1])*(matB[1][3])) + ((matA[0][2])*(matB[2][3]));
  matC[1][0] = ((matA[1][0])*(matB[0][0])) + ((matA[1][1])*(matB[1][0])) + ((matA[1][2])*(matB[2][0]));
  matC[1][1] = ((matA[1][0])*(matB[0][1])) + ((matA[1][1])*(matB[1][1])) + ((matA[1][2])*(matB[2][1]));
  matC[1][2] = ((matA[1][0])*(matB[0][2])) + ((matA[1][1])*(matB[1][2])) + ((matA[1][2])*(matB[2][2]));
  matC[1][3] = ((matA[1][0])*(matB[0][3])) + ((matA[1][1])*(matB[1][3])) + ((matA[1][2])*(matB[2][3]));

  // Prova real
  for(i=0;i<2;i++) {
    for(j=0;j<4;j++) {
      printf("matC[%d][%d] = %d\n", i, j, matC[i][j]);
    }
  }
}


int main() {
  int matA[2][3], matB[3][4], matC[2][4], i=0, j=0;

  // Lê a matriz matA
  for(i=0;i<2;i++) {
    for(j=0;j<3;j++) {
      printf("Entre com o valor de matA[%d][%d]\n", i, j);
      scanf("%d", &matA[i][j]);
    }
  }

  // Lê a matriz matB
  for(i=0;i<3;i++) {
    for(j=0;j<4;j++) {
      printf("Entre com o valor de matB[%d][%d]\n", i, j);
      scanf("%d", &matB[i][j]);
    }
  }
  // Chama a função para multiplicar as matrizes
  multi_matriz(matA, matB, matC);
}
