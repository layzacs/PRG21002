// 5. Implemente um programa C para ler N resistências. O programa deve ler inicialmente N, depois o valor das resistências (fazendo os cálculos cumulativos) e então calcular o valor da resistência série e paralelo equivalente do circuito. Não usar vetores. Usar um comando while.

#include <stdio.h>

int  main () {

  int i=1,n_resist,j,resist,req,operacao;
  printf("Insira 1 para calcular resistências em paralelo\n Insira 2 para calcular resistências em série:\n");
  scanf("%d", &operacao);

  switch(operacao) {
    case 1:
      printf("Quantos resistores são?");
      scanf("%d", &n_resist);

      while (i<=n_resist) {
        printf("Insira o resistor n° %d", i);
        scanf("%d", &j);

        if (n_resist=1) {
          resist = j;
          break;
        }

        j = 1/j

        resist = resist+j
        i++;

      }
    case 2:
      printf("Quantos resistores são?");
      scanf("%d", &n_resist);

      while (i<=n_resist) {
        printf("Insira o resistor n° %d", i);
        scanf("%d", &j);

        if (n_resist=1) {
          resist = j;
          break;
        }
        resist = resist+j
      }
  }
}
