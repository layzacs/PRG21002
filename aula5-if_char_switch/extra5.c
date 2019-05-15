#include <stdio.h>

main () {

  float temperatura;
  printf("Insira a temperatura da água: (°C)\n");
  scanf("%f", &temperatura);

  if (temperatura < 25) {
    printf("Água fria!\n");
  }
  else if (temperatura>=25&&temperatura<=30) {
    printf("Água morna.\n");
  }
  else {
    printf("Água quente!\n");
  }
}
