// 1. Desenvolver um algoritmo que efetue a soma de todos os números ímpares que são múltiplos de três e que se encontram no conjunto dos números de 1 até 500.

#include <stdio.h>

int main () {

  int i,soma;
  soma = 0;
  // Looping vai se repetir 500 vezes. Quando o resto da divisão de i (0 a 500) por 3 for igual a zero (múltiplo de três!)
  // e o resto da divisão por 2 for DIFERENTE de zero (número não é par), o valor de i é somado na variável soma.
    for (i=0;i<500;i++) {
      if (i%3==0 && i%2!==0) {
        soma = soma+i;
      }
    }
    printf("A soma de todos os números ímpares e múltiplos de três do intervao 1 a 500 é: %d\n", soma);
}
