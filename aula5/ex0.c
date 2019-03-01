#include <stdio.h>
 
main ()
{
  int operando1, operando2, operacao, resultado;
  
  printf("Qual operação você deseja fazer? (digite 1 para soma, digite 2 para subtração, digite 3 para multiplicação, digite 4 para divisão):\n");
  scanf ("%d",&operacao);
  printf("Entre com o primeiro operador (número inteiro):\n");
  scanf ("%d",&operando1);
  printf("Entre com o segundo operador (número inteiro):\n");
  scanf ("%d",&operando2);
  switch(operacao) {
  case 1:
          printf("Opção 1 - Soma\n");
          resultado = operando1 + operando2;
          printf(O resultado da operação é: %d\n",resultado);
          break;
  case 2:
          printf("Opção 2 - Subtração\n");
          resultado = operando1-operando2;
          printf("O resultado da operação é: %d\n",resultado);
          break;
  case 3:
          printf("Opção 3 - Multiplicação\n");
          resultado = operando1*operando2;
          printf("O resultado da operação é: %d\n",resultado);
          break;
  case 4:
          printf("Opção 4 - Divisão\n");
          resultado = operando1/operando2;
          printf("O resultado da operação é: %d\n",resultado);
          break;
  default:
          printf("Sua resposta não foi válida.\n");
          break;
  }
}
