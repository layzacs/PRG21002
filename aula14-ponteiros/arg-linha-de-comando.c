#include <stdio.h>
 
 
// argv[0] já é o nome do programa a ser executado;
main(int argc, char *argv[]) // argc é o número de argumentos passados como parâmetro; o argv são os dados passados em si
{
  int i;
 
  for (i=0;i<argc;i++) {
       printf("%s\n", argv[i]);
  }
  printf("Numero de parametros passados = %d\n", argc-1); /* o primeiro é o nome do arquivo executavél" */
}
