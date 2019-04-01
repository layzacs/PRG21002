#include <stdio.h>

int main(void) {

  int i,valor;
  char n[5];

  printf("Digite 5 números:\n");
  scanf("%s", n);
  printf("A string é %s\n", n);
  printf ("%c\n", n[1]);
  printf ("%c\n", n[4]);
  for (i=4; i>0; i--) {
    printf("Valor do elemento %d da string: %c\n", i, n[i]);
    printf("O loop está em andamento.\n");
  }

}
