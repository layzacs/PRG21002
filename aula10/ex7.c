// 7. Implementar um programa que lê duas cadeias e imprime uma mensagem caso as cadeias seja iguais.
#include <stdio.h>

int main () {
  int i, diferente=0;
  char primeira[40], segunda[40];

  printf("Entre com a cadeia número 1:\n");
  scanf(" %[^\n]s", primeira);

  printf("Entre com a cadeia número 2:\n");
  scanf(" %[^\n]s", segunda);

  printf("As cadeias são: %s e %s\n", primeira, segunda);

  for (i=0;i<30;i++) {
    if (primeira[i]!=segunda[i]) {
    printf("Os caracteres %c e %c não são iguais\n", primeira[i], segunda[i]);
      diferente++;
      break;
    }
  }
  if (diferente==0) {
    printf("As cadeias são iguais");
  }
  else {
    printf("As cadeias não são iguais.");
  }
}
