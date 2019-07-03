// 10. Fazer uma função que copia string mas que torna maiúsculo caracteres que estavam em minúsculo na string fonte.

#include <stdio.h>

char* cpm_string(char fonte[], char saida[]) {
  int i;
  // looping irá somente incrementar a variavel i para cada posição válida da string fonte.
  for (i=0;(fonte[i]!=0);i++) {
    if ((fonte[i]<123) && (fonte[i]>96)) {
      saida[i] = (fonte[i] - 32);
    }
    else {
      saida[i] = fonte[i];
    }
  }
  return saida;
}

int main () {
  char string_inicial[20];
  char string_final[20];
  printf("Insira a string que será copiada:\n");
  scanf(" %s", string_inicial);
  printf("A string resultante é: %s", cpm_string(string_inicial, string_final));
}
