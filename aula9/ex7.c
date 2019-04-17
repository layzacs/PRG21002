// 7. Sobre o exercício anterior, acrescente uma função para imprimir o número de 1s,...6s do vetor.

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

int imprime_vetor(int vetor[100]) {

  for (i=0;i<100;i++) {

      printf("vetor[%d]= %d\n", i, vetor[i]);
    }

}

int main(void) {

  srand ( time(NULL) );

  randomizer(vetRnd);
  imprime_vetor(vetRnd);
}
