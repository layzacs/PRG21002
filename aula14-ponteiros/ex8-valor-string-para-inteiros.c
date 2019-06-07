 //8 - Implementar uma função que recebe uma string contendo uma cadeia de caracteres com dígitos numéricos e retorna o valor inteiro da string. Usar ponteiros.

#include <stdio.h>

int a_toi(char *p) {
  int num=0;

  for(*p;*p!=0;p++) {
    // *p - '0' - esta parte do código está basicamente pegando o valor de p e diminuindo, na tabela ASCII, a quantidade de simbolos entre o calor de p e o simbolo 0. É como diminuir 48, para chegar ao representante da tabela ascii do número desejado.
    num = num*10 + (*p - '0');
  }
  return num;
}

int main(void) {
  char *p="123";
  int x;

  x = a_toi(p);

  printf("%d\n",x);

  /* neste ponto x deve conter 123 */
  return 0;
}
