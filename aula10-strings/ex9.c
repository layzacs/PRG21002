// 9. Fazer uma variação do str_cpy que retorna um inteiro correspondente ao tamanho da string copiada. Mostrar o funcionamento da função no main.

#include <stdio.h>

int cp_string(char fonte[], int i) {
// looping irá somente incrementar a variavel i para cada posição válida da string fonte.
  for (i=0;(fonte[i]!=0);i++) {
  }

  return i;
}

int main () {

  char string_inicial[20];
  int i=0;
  printf("Insira a string que será copiada:\n");
  scanf(" %s", string_inicial);
  printf("O tamanho da string é: %d", cp_string(string_inicial, i));
}
