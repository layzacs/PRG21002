// Implementar um programa que cria duas matrizes 2X2 de números complexos no formato retangular. Adicionalmente, implementar uma função para somar estas matrizes. Reusar a função de soma de número já implementada.

#include <stdio.h>
#include <math.h>

#define NUM_LIN 2
#define NUM_COL 2

struct num_complex {
  float real;
  float complex;
};


struct num_complex soma_mat_complex(struct num_complex x, struct num_complex y) {

  x.real = x.real + y.real;
  x.complex = x.complex + y.complex;

}


int main (void) {

  struct num_complex mat1[NUM_LIN][NUM_COL]={
                              {{2.5,2.7},{1.5,2.3}},
                              {{1.9,2.6},{3.5,7.3}}
                            }, 
                      mat2[NUM_LIN][NUM_COL]={
                              {{4.5,2.8},{1.6,8.3}},
                              {{0.9,2.9},{7.5,4.3}}
                            };

  //printf("mat[1][1].real = %f\n", mat1[0][1].real);

  soma_mat_complex(mat1, mat2);

  printf("A soma deu: %f + (%fi)\n", mat1.real, mat1.complex);

}
