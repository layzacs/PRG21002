// 8. Elaborar uma função para copiar uma string que está em um vetor de char para outro vetor. Fazer um exemplo de uso no main.
#include <stdio.h>

char* copia_string(char fonte[]) {
  
  int i;
  char saida[20];

  for (i=0;(fonte[i]!=0);i++) {
    saida[i]=fonte[i];
  } 
  return saida;
}

int main () {
  
  char string_inicial[20];
  
  printf("Insira a string que será copiada:\n");
  scanf("%s\n", string_inicial);

  printf("A cópia da string em um outro vetor é: %s\n", copia_string(string_inicial));

}
