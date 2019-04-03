// 8. Elaborar uma função para copiar uma string que está em um vetor de char para outro vetor. Fazer um exemplo de uso no main.
#include <stdio.h>

char copia_string(string_inicial) {
  char string_copia[20];
  int i;
  
  for (i=0;(string_inicial[i]!=0);i++) {
    string_copia[i]=string_inicial[i];
  } 
  return string_copia;
}

void main () {
  
  char string[20];
  
  printf("Insira a string que será copiada:\n");
  scanf("%s\n", string);

  printf("A cópia da string em um outro vetor é: %s\n", copia_string(string));

}
