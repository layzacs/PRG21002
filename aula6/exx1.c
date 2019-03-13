// Escreva um algoritmo que mostre a tabuada de um número fornecido pelo teclado. Esse número deve estar entre 1 e 10.
# include <stdio.h>

int main () {

  int numero,i,multiplo;
  
  printf("Insira um número de zero (0) a dez (10) para ver a sua tabuada:");
  scanf("%d", &numero);
  
  if (numero  <= 10 && numero >= 0) {
    for (i=1;i<=10;i++) {
      multiplo = numero*i;
      printf("x%d: %d\n", i,multiplo);
    }
  }
  else {
    printf("Esse não é um número válido.");
  }
}
