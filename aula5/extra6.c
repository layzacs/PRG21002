#include <stdio.h>

main () {

  int dia;
  printf("Conversor de números para dias da semana.\n");
  printf("Entre com um número de 1 a 7:\n");
  scanf("%d", &dia);

  switch(dia) {
      case 1:
        printf("dia 1 é domingo.\n");
        break;

      case 2:
        printf("dia 2 é segunda-feira.\n");
        break;

      case 3:
        printf("dia 3 é terça-feira.\n");
        break;

      case 4:
        printf("dia 4 é quarta-feira.\n");
        break;

      case 5:
        printf("dia 5 é quinta-feira.\n");
        break;

      case 6:
        printf("dia 6 é sexta-feira.\n");
        break;

      case 7:
        printf("dia 7 é sábado.\n");
        break;

      default:
        printf("Esse não é um número válido.\n");
        break;
    }
}
