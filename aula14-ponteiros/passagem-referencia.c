void alfa(int *p)
{
  *p=10;
}

main()
{
  int x;
  x =5;
  printf("Valor de x antes da chamada de alfa = %d\n", x);
  // A função alfa está pegando o local de memória da variável x, que é exatamnte o que o ponteiro faz.
  alfa(&x);
  printf("Valor de x depois da chamada de alfa = %d\n", x);
}
