// Escreva um algoritmo que teste se um número informado pelo teclado é primo.

#include <stdio.h>

int main () {
  
  int numero,i,divisor;
  
  printf("Insira o número que você quer ver se é primo:\n");
  scanf("%d", &numero);
  
  if (numero%2=0) {
    printf("O número não é primo.");
  }
  else {
    for (i=0;i<numero;i++) {
      if (numero%i=0) {
        divisor++;
      }
      else {
        break;
      }
    }      
  
  }

}
