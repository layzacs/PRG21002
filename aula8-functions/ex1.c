// Elaborar um programa contendo uma função da forma: float area_retang (float lado1 , float lado2)

#include <stdio.h>

float area_ret(float lado1, float lado2) {
  float area;

  area = (lado1*lado2);
  return area;
}

int main() {

  float l1, l2, area;

  printf("Insira o lado 1 do retângulo:\n");
  scanf("%f", &l1);

  printf("Insira o lado 2 do retângulo:\n");
  scanf("%f", &l2);

  printf("A área do retângulo é: %.2f", area_ret(l1,l2));
}
