#include <stdio.h>

main () {
  int a,b,c,maior,menor;

  printf("Insira o primeiro valor:\n");
  scanf("%d", &a);

  printf("Insira o segundo valor:\n");
  scanf("%d", &b);

  printf("Insira o terceiro valor:\n");
  scanf("%d", &c);

  maior = b;
  menor = b;

  if (a < menor) {
    menor = a;
  }
  if (a > maior) {
    maior = a;
  }
  if (c < menor) {
    menor = c;
  }
  if (c > maior) {
    maior = c;
  }

  printf("O maior número é %c e o \n" maior);
  printf("O menor número é %c \n" menor);

}
