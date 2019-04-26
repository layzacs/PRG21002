// Elaborar uma função que recebe como parâmetro um vetor contendo uma string e um vetor com dados não identificados.

//    A função deve copiar a string do primeiro vetor para o segundo, invertendo a mesma.
//    A função também deve retornar a quantidade de caracteres 'i' na string.

#include <stdio.h>

// Função responsável por copiar o valor de uma string invertido na outra.
int copia_string(char alfa[], char beta[]) {

  int len=0, k, i, cont=0;

  for (i=0;alfa[i]!=0;i++) {
    len++;
    if (alfa[i] == 'i') {
      cont++;
    }
  }

  printf("a palavra inicial é: %s\n", alfa);
  // O valor de k corresponde ao tamanho da string inicial menos 1, porque por ex. uma string de tamanho 4 vai de 0 a 3.
  k = (len - 1);

  printf("valor de k é %d\n", k);

  for (i=0;i<len;i++) {
    printf("vetA[i] = %c\n", alfa[i]);
    beta[k] = alfa[i];
    k = k-1;
  }
  // Tem que especificar aqui o final da string beta, se não imprime lixo.
  beta[len] = 0;
  return cont;
}


int main(void) {

  char  vetA[15], vetB[15];

  printf("Insira a palavra:\n");
  scanf("%s", vetA);


  printf("A palavra resultante é: %s, %d\n", vetB, copia_string(vetA, vetB));
}
