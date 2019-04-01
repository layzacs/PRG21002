#include <stdio.h>

int main(void) {

  int i,valor;
  char n[5];

  printf("Digite 5 números:\n");
  scanf("%s", n);

  for (i=5; i>=0; i--) {
    printf("%c\n", n[i]);
  }
}
