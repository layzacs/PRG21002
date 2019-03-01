#include <stdio.h>

main () {

  float velocidade;

  printf("A que velocidade o carro estava? (km/h)\n");
  scanf("%f", &velocidade);

  if (velocidade > 60 && velocidade < 80) {
    printf("A multa recebida é de R$180,00.");
  }
  else if (velocidade > 80) {
    printf("A multa recebida é de R$360,00.");
  }
  else {
    printf("O carro estava dentro dos limites de velocidade.\n");
  }
}
