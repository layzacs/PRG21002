// 6. Considere um vetor global de int chamado vetRnd de tamanho 100. Construa uma função que inicia este vetor com 100 números randômicos entre 1 e 6. 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int vetRnd[100];

int randomizer(int vetor[100]) {
  int i=0, var;
  
  for (i=0;i<100;i++) {

    vetor[i] = 1 + (rand() % 6);
    var = rand() % 6;
    printf("vetor[%d]= %d\n", i, vetor[i]);
  }
}

int main(void) {

  srand ( time(NULL) );

  randomizer(vetRnd);

}
