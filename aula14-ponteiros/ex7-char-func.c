//Implementar uma função que recebe como parâmetro o endereço de duas variáveis do tipo char e após a chamada da função os valores das variáveis devem estar maiúsculos (caso elas contenham letras minúsculas). 
#include <stdio.h>

char transforma_maiusc(char *alfa, char *beta) {
 *alfa = *alfa-32;
 *beta = *beta-32;

}


int main(void) {
  char a = 'l', b = 'c';

  transforma_maiusc(&a, &b);

  printf("a=%c e b=%c\n", a, b);

}
