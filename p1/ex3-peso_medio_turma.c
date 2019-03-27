#include <stdio.h>
int main () {
  int i=1;
  float peso,n_homem=0,media_t=0,media_h=0,ptotal_h,ptotal_t,menor=200,maior=0;
  char sexo;

  while (i<11) {
  
    printf("Insira o peso do aluno n%d: (kg)\n", i);
    scanf("%f", &peso);
    printf("Agora insira o sexo do aluno (h para homem e m para mulher)\n");
    scanf( "\n%c", &sexo);
    printf("%c", sexo);

// Capturando o peso menor, ele sempre compara com o input anterior. Desta forma o menor input vai ser guardado como menor. Mesma coisa para o maior.
    if (peso < menor) {
      menor = peso;
    }
    if (peso > maior) {
      maior = peso;
    }

// Se o sexo for masculino, o peso é guardado na variavel ptotal_h (peso total dos homens) e é somado 1 na variável n_homem (numero total de homens).
    if (sexo == 'h') {
      ptotal_h = (ptotal_h+peso);
      n_homem++;
    }
    
    ptotal_t = (ptotal_t+peso);
    
    i++;
  }
 
// calculo das medias. A media da turma sempre vai ser /10 pois são sempre 10 alunos. Número de homens é variável. 
  media_t = (ptotal_t/10);
  media_h = (ptotal_h/n_homem);
  printf("O menor e o maior peso de um integrante da turma são: %f e %f\n", menor, maior);
  printf("A média de peso dos homens da turma é: %f\n", media_h);
  printf("A media de peso da turma toda é: %f\n", media_t);
}
