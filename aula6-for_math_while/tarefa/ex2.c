// 2. Faça uma versão "politicamente incorreta" do programa de adivinhação da aula passada, Faça um loop infinito com o do while() e use uma instrução goto para sair do loop.

#include <stdio.h>
#include <stdlib.h> // Lib that includes rand.
#include <time.h> // Lib that includes time.h, responsible for getting the system time for seeding.
int main () {

  int guess,key;

  srand ( time(NULL) );
  key = 1 + (rand() % 10);

// while não irá parar a não ser que a int guess seja igual a int key. O único jeito de sair do loop é pelo goto.
  while(1) {

    printf("Adivinhe o número (de 1 a 10)\n");
    scanf("%d", &guess);

    if (guess==key) {
      goto ACERTO;
    }
  }
  ACERTO:
    printf("O número %d está correto!\n", key);
}
