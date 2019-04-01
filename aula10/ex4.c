// 4. Implementar um programa que substitui todos os 'o' de uma cadeia por 'O.
#include <stdio.h>

int main () {

  int i;
  char st[50];

  printf("Insira a frase:\n");
  scanf("%[^\n]s", st);

  for (i=0;i<50;i++) {
    if (st[i]=='o') {
      st[i] = 'O';
    }
  }
  printf("A frase resultante é: %s\n", st);
}
