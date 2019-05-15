main()
{
  float x[10]; /* vetor com 10 floats */
  int i;
 
  x[0] = 22.5; /* colocando a constante 22.5 na posição 0 do vetor */
 
  x[9] = x[0] + 2.5; /* operando com a posição zero e colocando resultado na posição 9 */
 
  printf("Entrar com o número na posição 5\n");
  scanf("%f",&x[5]);
 
  i=2;
  x[i*2]=x[i]*1.5;        /* usando uma expressão como índice */
 
  i=0;
  while (i<8) {        /* usando loop para acessar o vetor */
     x[i]=0.0;
     i++;
  }
}
