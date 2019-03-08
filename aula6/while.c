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

// Another possible format: while in the end of the instruction
//#include <stdio.h>
//main() 
//{
//  int contador;
// 
//  contador=0;
//  do {  
//     printf("valor do contador =  %d\n", contador);
//     contador=contador+1;
//  } while (contador<5);
//}
