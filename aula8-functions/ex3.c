// 3. Elaborar um programa contendo uma função da forma: float dif_area_circ (float raio1, float raio2). A função recebe o raio de dois círculos e retorna a diferença da área entre eles. Reaproveitar o exercício anterior. 

#include <stdio.h>

float dif_area_circ(float raio1, float raio2) {
  
  float a;
  a = ((raio1*raio1*3.1415)-(raio2*raio2*3.1415));
  // Testa para caso a diferença dê negativa, retorne o mesmo valor porém positivo. N existe área negativa.
  if (a<0) {
    a=a*(-1);
  }

  return a;

}

int main() {
  float r1, r2;

  printf("Insira o raio do círculo 1:\n");
  scanf("%f", &r1);
  
  printf("Insira o raio do círculo 2:\n");
  scanf("%f", &r2);
  
  printf("A diferença de área dos dois raio é: %.2f\n", dif_area_circ(r1, r2));
}
