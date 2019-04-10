// 4. Elaborar uma função que recebe dois números inteiros. A função retorna a soma de todos os números entre eles (inclusive). 

#include <stdio.h>


int soma_acumulada(int num1, int num2) {
  
  int i, soma;
  // Em cada rodada do looping, a var i vai tomar o valor do número seguinte e ser somada ao total. A var i começa igual a num1 e termina igual a num2.
  for (i=num1;i<=num2;i++) {
    soma = i+soma;
  }
  return soma;
}

int main(void) {
  int n1, n2;
  
  printf("Digite o primeiro número: (menor)\n");
  scanf("%d", &n1);

  printf("Digite o segundo número: (maior)\n");
  scanf("%d", &n2);
  
  printf("A soma de todos os números entre %d e %d é: %d\n", n1, n2, soma_acumulada(n1, n2));
  return 0;
}
