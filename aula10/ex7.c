// 7. Implementar um programa que lê duas cadeias e imprime uma mensagem caso as cadeias seja iguais.
#include <stdio.h>

int main () {
  int i, diferente=0;
  char primeira[30]="bola", segunda[30]="bola";

  printf("Entre com a cadeia número 1:\n");
  //scanf(" %[^\n]s", primeira);

  printf("Entre com a cadeia número 2:\n");
//  scanf(" %[^\n]s", segunda);

  printf("As cadeias são: %s e %s\n", primeira, segunda);

  for (i=0;i<50;i++) {
    if (primeira[i]!=segunda[i]) {
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
