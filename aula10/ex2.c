// 2. Implementar um programa que computa o número de caracteres 'a' de uma string lida pelo teclado.
#include <stdio.h>

int main () {
  int i,ntotal=0;
  char st[50];

  printf("Insira a frase: (máximo de 50 caracteres, espaços também contam)\n");
  scanf( "%[^\n]s",st);

  for (i=0;i<50;i++) {
    if (st[i]=='a') {
      ntotal++;
    }
  }
  printf("O número total de caracteres 'a' dentro da frase é: %d\n", ntotal);
}
