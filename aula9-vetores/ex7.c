// 7. Sobre o exercício anterior, acrescente uma função para imprimir o número de 1s,...6s do vetor.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Var global (foi especificado no exercício)
int vetRnd[100];

// Função que pega números aleatórios e insere seus valores dentro do vetor
int randomizer(int vetor[100]) {
  int i=0, var;
  for (i=0;i<100;i++) {
    // expressão necessária para números aleatórios no intervalo de 1 a 6.
    vetor[i] = 1 + (rand() % 6);
    var = rand() % 6;
  }
}

// Função para imprimir o valor final do vetor.
int imprime_vetor(int vetor[100]) {
  int i;
  for (i=0;i<100;i++) {
      printf("vetor[%d]= %d\n", i, vetor[i]);
    }
}

int main(void) {
  // A função responsável por pegar a seed (que é o horário do computador) precisa estar dentro da função main() para funcionar.
  srand ( time(NULL) );

  randomizer(vetRnd);
  imprime_vetor(vetRnd);
}
