// Elaborar um programa contendo uma função da forma: float area_circ (float raio). A função recebe o raio de um círculo e retorna a área da mesma. 

#include <stdio.h>

float calcula_raio(float raio) {
  return (raio*raio)*3.1415;
}

int main() {
  float r, a;

  printf("Insira o raio do círculo:\n");
  scanf("%f", &r);
  
  printf("A área do circulo cujo raio é %.2f é %.2f.\n", r, calcula_raio(r));
}
