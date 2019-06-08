// Implementar a função str_cat que concatena duas strings usando ponteiros.
#include <stdio.h>
#include <string.h> //necessário para strcpy

char str_cat(char alfa[30], char beta[20]) {
  int i;
  int tam_alfa = (strlen(alfa));
  int tam_beta = (strlen(beta));

  for (i=0;i<tam_beta;i++) {
    alfa[tam_alfa+i] = beta[i];
    printf("alfa[%i] = %c\n", (tam_alfa+i), alfa[tam_alfa+i]);
  }
}

 int main() {
   char vet1[30]="IFSC";
   char vet2[20]="-SC";

   str_cat(vet1,vet2);
   printf("%s\n",vet1); /* aqui deveria imprimir "IFSC-SJ" */
   return (0);
 }
