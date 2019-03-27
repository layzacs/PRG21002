#include <stdio.h>

int main () {
  
  int p=0,n,i=1,j,produto=1;
  
  printf("Produto de N números Inteiros\nQuantos números serão multiplicados?\n");
  scanf( "%d", &n);

// enquanto o i for menor que o numero total de multiplicadores, irá repetir os procedimentos.
  while (i<=n) {

    printf ("Insira o %d° número da multiplicação:\n", i);
    scanf ( "%d", &j);
    
    if (j>10 && j<50) {
    p++;
    }

// Este if serve de aviso, apenas. sempre q ele aparecer o resultado da multiplicação vai ser 0.
    if (j==0) {
      printf("A multiplicação de qualquer coisa por 0 é igual a 0.\n");
    }
// Se o j for um número valido, ele é multiplicado pelo valor do produto e guardado.
    produto = (produto*j);
    i++;    
  }
  printf("O valor da multiplicação é %d\n", produto);
  printf("A quantidade de multiplicadores maior que 10 e menor que 50 é: %d.\n", p);
}

