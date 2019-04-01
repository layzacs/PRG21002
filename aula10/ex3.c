// 3. Implementar um programa que computa o número de ocorrências das subcadeias "ab" de uma string lida pelo teclado.
#include <stdio.h>

int main () {
  int i, ntotal=0;
  char st[50];

  printf("Insira a frase: (máximo de 50 caracteres, espaços também contam)\n");
  scanf( "%[^\n]s",st);

  for (i=0;i<50;i++) {
    if (st[i]=='a' & st[(i+1)]=='b') {
      ntotal++;
    }
  }
  printf("O número total de ocorrência de 'ab' é: %d\n",ntotal);
}
