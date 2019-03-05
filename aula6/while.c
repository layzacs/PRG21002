#include <stdio.h>
main() {
  int contador;
  contador=0;

  while (contador<5) {
	   printf("valor da expressão = contador < 5 é %d\n", contador<5);
     printf("valor do contador = %d\n", contador);
     contador=contador+1;
  }

  printf("NO FINAL a expressão  contador < 5 é %d\n", contador<5);
}
