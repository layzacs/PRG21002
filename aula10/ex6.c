// 6. Modificar o exercício anterior para que os caracteres não iguais sejam intercambiados (mas continue respeitando os finais das cadeias). Exemplo: "casa" e "malagueta" deve resultar em "mala" e "casagueta"
#include <stdio.h>

int main () {
  int i;
  char primeira[40], segunda[40], troca=0;

  printf("Entre com a frase número 1:\n");
  scanf(" %[^\n]s", primeira);

  printf("Entre com a frase número 2:\n");
  scanf(" %[^\n]s", segunda);

  printf("As frases são: %s e %s\n", primeira, segunda);

// Enquanto a posição i dos vetores não forem nulos, se o valor da mesma posição i dos vetores for diferente, eles serão trocados. Var. troca serve de auxiliar.
  for (i=0;(primeira[i]!=0) && (segunda[i]!=0);i++) {
    if (primeira[i]!=segunda[i]) {
      printf("%c e %c são diferentes\n", primeira[i], segunda[i]);
      // Efetua a troca dos valores dos vetores
      troca = primeira[i];
      primeira[i] = segunda[i];
      segunda[i] = troca;
    }
  }
  printf("%s %s\n", primeira, segunda);
}
