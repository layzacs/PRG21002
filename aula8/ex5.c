// Elaborar um programa em C correspondente aos fluxogramas abaixo. Trata-se de um procedimento para calcular o fatorial de um número inteiro passado como parâmetro para uma função. O Subprograma denominado CalcFatorial recebe um valor no parâmetro N (implicitamente inteiro) e retorna o valor calculado do fatorial. O fluxograma principal invoca duas vezes o subrograma. O retorno é armazenado nas variáveis NUM1 e NUM3. Quando um subprograma retorna um valor, ele é chamado de função. Para manter coerência com o C chamaremos qualquer subrprograma de função (independente de retornar valor). 

#include <stdio.h>

int calc_fatorial(n) {
  int i;

  for (i=(n-1);i>0;i--) {
    n=n*i;
  }
  return n;
}

int main(void) {
  int num1, num2=4, num3;

  num1 = calc_fatorial(5);
  num3 = calc_fatorial(num2*3);
  return 0;

}
