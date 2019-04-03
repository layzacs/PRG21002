// 7. Implementar um programa que lê duas cadeias e imprime uma mensagem caso as cadeias seja iguais.
#include <stdio.h>

int main () {
  int i, diferente;
  char primeira[40], segunda[40];

  printf("Entre com a cadeia número 1:\n");
  scanf(" %s", primeira);

  printf("Entre com a cadeia número 2:\n");
  scanf(" %s", segunda);

  printf("As cadeias são: %s e %s\n", primeira, segunda);

// Enquanto um dos valores da posição dos dois vetores não for nulo, testa se os valores da mesma posição são diferentes
  for (i=0;((primeira[i]!=0) || (segunda[i]!=0));i++) {
    if (primeira[i]!=segunda[i]) {
      // Quando os valores da mesma posição dos vetores for diferente, incrementa a variável 'diferente'
      diferente++;
      break;
    }
  }
  // Quando 'diferente' não for igual a 0, significa que teve pelo menos uma ocorrencia de valores diferentes nas strings
  if(diferente==0) {
    printf("As cadeias sao iguais\n");
  }
  else {
    printf("As cadeias não são iguais\n");
  }
}
