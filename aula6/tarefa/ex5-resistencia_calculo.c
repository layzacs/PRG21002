// 5. Implemente um programa C para ler N resistências. O programa deve ler inicialmente N, depois o valor das resistências (fazendo os cálculos cumulativos) e então calcular o valor da resistência série e paralelo equivalente do circuito. Não usar vetores. Usar um comando while.

#include <stdio.h>

float main () {

  int i=1,nresist,operacao;
  // Estas variáveis precisam ser float porque estamos mexendo com números não inteiros (1/qualquercoisa).
  float req=0,resist=0,j;

  // Primeiros passos: Definir qual serã a operação e quantos resistores possuem o circuito.
  printf("Insira 1 para calcular resistências em paralelo:\nInsira 2 para calcular resistências em série:\n");
  scanf("%d", &operacao);
  printf("Quantos resistores o circuito possui?\n");
  scanf("%d", &nresist);

  switch(operacao) {
    // Case 1: Para quando for um circuito paralelo.
    // Para cada novo valor de resistor adicionado, "1/resistor" será somado a variável resist. A req será igual a 1 dividido pela soma de cada "1/resistor".
    case 1:
      while (i <= nresist) {
        printf("Insira o resistor n° %d: (ohms).\n", i);
        scanf( "%f", &j);

        if (nresist==1) {
          printf("O circuito só tem um resistor.\n");
          req = j;
          break;
        }
        else {
          j = 1/j;
          resist = resist+j;
          req = 1/resist;
          i++;

        }
      }
      printf("A resistência equivalente é %.2f (ohms).\n", req);
      break;

    // Caso 2: Quando o circuito for em série, a resistência equivalente será a soma de todos os nresistores inseridos.
    // Um looping é criado e se repetirá um número de vezes igual ao número de resistores do circuito.
    case 2:
      while (i<=nresist) {
        printf("Insira o resistor n° %d: (ohms).\n", i);
        scanf("%f", &j);
        req = req+j;
        i++;
      }
      printf("A resistência equivalente é %.2f (ohms).\n", req);
      break;
  }
}
