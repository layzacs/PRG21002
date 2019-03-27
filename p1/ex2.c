#include <stdio.h>

int main () {
  
  int n, i;
  printf("Insira o número para ver o resultado da fatorial:\n");
  scanf("%d", &n);

  for (i=(n-1);i>0;i--) {
    n=n*i;
    printf("%d\n", n);
  }
  
  printf("A fatorial do número é %d\n", n);
}
