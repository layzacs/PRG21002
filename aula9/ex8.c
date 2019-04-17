// Implementar uma função que recebe dois vetores de inteiros como parâmetro e o tamanho dos mesmos (suponha vetores de mesmo tamanho). A função deve retornar o número de elementos iguais comparados posição por posição. O esqueleto da função deve ser como:
//  int compara_vetores(int vet1[],int vet2[], int tamanho)
//{
//  int num_elementos;
//
//  return num_elementos;
//}
#include <stdio.h>

// Função vai receber os dois vetores e comparar suas posições. Quando o valor for igual, incrementa num_elementos.
int compara_vetores(int vet1[10], int vet2[10]) {
  int i, num_elementos=0;

  for (i=0;i<10;i++) {
    if (vet1[i] == vet2[i]) {
      num_elementos++;
    }
  }
  return num_elementos;
}


int main(void) {

  int alfa[10], beta[10], i;

  for (i=0;i<10;i++) {
    printf("Insira o valor alfa[%d]:\n", i);
    scanf("%d", &alfa[i]);
  }

  for (i=0;i<10;i++) {
    printf("Insira o valor beta[%d]:\n", i);
    scanf("%d", &beta[i]);
  }

  printf("O número de elementos iguais e na mesma posição dos vetores alfa e beta é: %d\n", compara_vetores(alfa, beta));

}
