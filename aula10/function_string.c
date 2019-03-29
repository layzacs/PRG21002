// Função str_len vai ser responsável por pegar a string declarada dentro o main() e retornar o tamanho dela (quantidade de caracteres)
int str_len(char x[])
{
  int i=0;
  while (x[i]!=0)
    i++;
  return i;
}
 
// Função main vai ter a string teste declarada. O valor da variavel tamanho vai ser o valor retornado pela função str_len(teste). 
main()
{
  char teste[]="IFSC-SJ";
  int tamanho;
 
  tamanho = str_len(teste);  
}
