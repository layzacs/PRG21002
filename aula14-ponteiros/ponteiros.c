// Ponteiro para variável int
#include <stdio.h>

main()
{
  int x;
  // Criando a variável ponteiro; ela precisa ser do MESMO TIPO que a variável que ele vai apontar.
  int *p;

  x=5;
  printf("Valor de x antes = %d\n", x);

  // Atribuindo ao ponteiro o local da variável x.
  p = &x;

  // Atribuindo um valor ao conteúdo do local de memória pra onde o ponteiro aponta.
  *p=10;

  printf("Valor de x depois = %d\n", x);

  // %p mostra o nome do endereço de memória da variável ponteiro p
  printf("Valor de p = %p\n", p);

  // Para se referenciar ao conteúdo do ponteiro tem que usar sempre *p.
}
