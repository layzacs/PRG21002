#include <stdio.h>

// Global variable
int x=1;
 
main ()
{
  int opcao;
  printf("Entre com uma opção (número inteiro)\n");
  scanf ("%d",&opcao);
  switch(opcao) {
  case 1:
          printf("opcao 1\n");
          break; /* o break força o encerramento da instrução*/
  case 2:
          printf("opcao 2\n");
          x++;  /* instrução demonstrativa apenas */
          printf("Note que pode existir ums lista de instruções\n");
          break;
  case 3:
          printf("opcao 3\n"); /* note o efeito de não ter o break */
  case 4:
          printf("opcao 4\n");
          break;
  case 5:
          printf("opcao 5\n");
          break;
          
  // Any other "opcao" possible value that is not 1, 2, 3, 4 or 5, will trigger default
  default:
          printf("opcao default\n");
          break;    /* a opção default é opcional */
  }
}
