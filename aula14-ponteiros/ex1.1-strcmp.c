// EXERCÍCIO 1: Implementar um programa chamado cmpcadeia que testa se duas strings passadas na linha de comando são iguais. O programa deve imprimir uma mensagem indicando se são iguais ou diferentes. Usar a função strcmp da biblioteca. Caso sejam passados mais ou menos que dois parâmetros o programa deve se encerrar mostrando uma indicação do tipo:

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

  if (argc==3) {
     // se as duas strings retornarem 0 na função strcmp, é pq são iguais
     if (strcmp(argv[1],argv[2])==0) {
       printf("Strings são iguais\n");
     } else {
       printf("Strings são diferentes\n");
     }
  } else {
     printf("%s: Número inválido de argumentos\n", argv[0]);
  }
 return (0);
}
