// 8. Elaborar uma função para copiar uma string que está em um vetor de char para outro vetor. Fazer um exemplo de uso no main.
#include <stdio.h>

char* copia_string(char fonte[], char saida[]) {

  int i;

  printf("A string fonte é %s\n", fonte);

// Enquanto o valor da posição i da string fonte for diferente de 0, irá copiar o valor da posição para a mesma posição da string saida.
  for (i=0;(fonte[i]!=0);i++) {
    saida[i]=fonte[i];
  }
  // O looping vai deixar de rodar quando o valor da posição da string fonte for 0. Mas, se o 0 não for inserido na string saida, teríamos um vetor que não é finalizado em 0, trazendo sujeira junto. Ver forma mais "bonita" de fazer o looping inserir um 0 no final do vetor saida.
  saida[i]=0;
  printf("vetor copiado: %s\n", saida);
  return saida;
}

int main () {

  char string_inicial[20];
  char string_final[20];

  printf("Insira a string que será copiada:\n");
  scanf(" %[^\n]s", string_inicial);

  printf("O vetor final copiado é: %s\n", copia_string(string_inicial, string_final));
//  printf("A cópia da string em um outro vetor é: %s\n", copia_string(string_inicial));

}
