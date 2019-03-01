#include <stdio.h>

main()
{

  int n,resto;

  printf("Insira o dividendo:\n");
  scanf("%d",&n);

  resto = n%2;

  if (resto == 0) {
    printf("O número %d é par\n", n);
  }
  else {
    printf("O número não é par.\n");
  }
}
