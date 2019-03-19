// 5. Implemente um programa C para ler N resistências. O programa deve ler inicialmente N, depois o valor das resistências (fazendo os cálculos cumulativos) e então calcular o valor da resistência série e paralelo equivalente do circuito. Não usar vetores. Usar um comando while.

#include <stdio.h>

int  main () {

  int i=1,nresist,j,req,resist,operacao;
  printf("Insira 1 para calcular resistências em paralelo:\nInsira 2 para calcular resistências em série:\n");
  scanf("%d", &operacao);

  switch(operacao) {
    // Case 1: Para quando for um circuito paralelo. Dentro do case 1, será lida a quantidade de resistores total do circuito.
    // Um looping é criado e se repetirá um número de vezes igual ao número de resistores do circuito.
    // Para cada novo valor de resistor adicionado, 1/resistor será somado ao valor de req atual.
    case 1:
      i=1;
      printf("Quantos resistores são?");
      scanf("%d", &nresist);

      while (i <= nresist) {
        printf("Insira o resistor n° %d:\n", i);
        scanf("%d", &j);

        if (nresist=1) {
          printf("O circuito só tem um resistor.\n");
          resist = j;
          break;
        }

        j = 1/j;

        resist = resist+j;
        i = i+1;
      }
      req = 1/resist;
      printf("A resistência equivalente do circuito é: %d\n", req);

    case 2:
      printf("Quantos resistores são?");
      scanf("%d", &nresist);

      while (i<=nresist) {
        printf("Insira o resistor n° %d:\n", i);
        scanf("%d", &j);

        if (nresist=1) {
          req = j;
          break;
        }
        req = req+j;
        i = i+1;
        }
        printf("A resistência equivalente é %d\n", req);
  }
}
