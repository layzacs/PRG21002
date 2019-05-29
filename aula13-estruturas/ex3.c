// Implementar um programa que cria duas matrizes 2X2 de números complexos no formato retangular. Adicionalmente, implementar uma função para somar estas matrizes. Reusar a função de soma de número já implementada.

#include <stdio.h>
#include <math.h>

#define NUM_LIN 2
#define NUM_COL 2

struct num_complex {
  float real;
  float complex;
};


float soma_mat_complex(struct num_complex x, struct num_complex y) {

}


int main (void) {

  struct num_complex n1={2,5};



  struct num_complex mat1[NUM_LIN][NUM_COL]={
                              {{2.5,2.7},{1.5,2.3}},
                              {{1.9,2.6},{3.5,7.3}}
                            };
                      mat2[NUM_LIN][NUM_COL]={
                              {{.x=4.5,.y=2.8,}, {.x=1.6,.y=8.3,}},
                              {{.x=0.9,.y=2.9,}, {.x=7.5,.y=4.3,}}
                            };

  //printf("mat[1][1].real = %f\n", mat1[0][1].real);

  struct soma_mat_complex(mat1, mat2);

}
