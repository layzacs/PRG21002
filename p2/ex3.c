// Elaborar uma função que recebe uma matriz quadrada 5x5 de "floats" passada como parâmetro. A função deve retornar a média da diagonal. Teste a função chamando-a a partir do programa principal.
#include <stdio.h>
float media_diagonal(float alfa[5][5]) {
  float media;

  media = (alfa[0][0]+alfa[1][1]+alfa[2][2]+alfa[3][3]+alfa[4][4])/5;

  return media;
}

int main(void) {
  float matriz[5][5]={1.1,1.2,1.3,1.4,1.5,
                      2.1,2.2,2.3,2.4,2.5,
                      3.1,3.2,3.3,3.4,3.5,
                      4.1,4.2,4.3,4.4,4.5,
                      5.1,5.2,5.3,5.4,5.5};

  printf("A média da diagonal da matriz é: %f", media_diagonal(matriz));

}
