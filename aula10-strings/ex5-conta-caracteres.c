// 5.  Implementar um programa que lê duas cadeias e conta o número de caracteres iguais ocupando a mesma posição. Exemplo: suponha as cadeias "casa" e "amora". Não existem caracteres iguais na mesma posição. Já as cadeias "casa" e "cada" possuem três caracteres iguais na mesma posição
#include <stdio.h>

int main () {
  int i, ntotal=0;
  char stp[40], stf[40];

  printf("Entre com a frase número 1:\n");
  scanf(" %[^\n]s", stp);

  printf("Entre com a frase número 2:\n");
  scanf(" %[^\n]s", stf);

  printf("As frases são: %s e %s\n", stp, stf);

// Se stp[i] for igual a stf[i], os caracteres são iguais e estão na mesma posição. Se o caracter em questão for ' ' (espaço), ignora. Caso contrário, soma 1 a var. ntotal. Se stp[i] ou stf[i] forem igual a 0, quero dizer que a string chegou ao fim, logo não é necessário fazer mais comparações.
  for (i=0;i<40;i++) {
    if (stp[i]==stf[i]) {
      if (stp[i]==' ') {

      }
      else {
        printf("os caracteres '%c' e '%c' são iguais\n", stp[i], stf[i]);
        ntotal++;
      }
    }
    else if (stp[i]==0 || stf[i]==0)
      break;
  }
  printf("O número total de caracteres iguais (nos mesmos lugares) é: %d\n", ntotal);
}
