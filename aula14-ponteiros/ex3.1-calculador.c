// EXERCÍCIO 3: Implementar um programa chamado "calculador" que recebe 3 parâmetros na linha de comando: dois números reais e um operador (char). O operador pode ser "+" ou "-". O programa deve mostrar o resultado da operação. Exemplo:
#include <stdio.h>

int a_toi(char *p) {
  int num=0;

  for(*p;*p!=0;p++) {
    // *p - '0' - esta parte do código está basicamente pegando o valor de p e diminuindo, na tabela ASCII, a quantidade de simbolos entre o calor de p e o simbolo 0. É como diminuir 48, para chegar ao representante da tabela ascii do número desejado.
    num = num*10 + (*p - '0');
  }
  return num;
}

int main(int argc, char *argv[]) {
  int total = 0, a, b;
  a = a_toi(argv[2]);
  b = a_toi(argv[3]);

  if (argc==4) {
     if (*argv[1] == '+') {
       total = a+b;
       printf("total = %d\n", total);
    }
    else if (*argv[1] == '-') {
      total = a-b;
      printf("total = %d\n", total);
    }
    else {
      printf("Parâmetros inválidos\n");
    }
  }
  else {
     printf("%s: Número inválido de argumentos\n", argv[0]);
  }
}
