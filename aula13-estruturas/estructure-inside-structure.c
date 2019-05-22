#include <stdio.h>
 
struct TEndereco{
     char rua[50];
     char numero[10];
};
 
struct TCidadao{
  char nome[50];
  char cpf[20];
  // a variável de posição 3 de dentro da estrutura TCidadao é também uma variável do tipo estrutura.
  struct TEndereco endereco;
  int num_filhos;
};
 
void main()
{
  struct TCidadao Cidadao;
 
  printf("Entre com o nome\n");
  scanf ("%s",Cidadao.nome);
 
  printf("Entre com o cpf\n");
  scanf ("%s",Cidadao.cpf);
 
  printf("Entre a rua\n");
  scanf ("%s",Cidadao.endereco.rua);
 
  printf("Entre a numero\n");   
  scanf ("%s",Cidadao.endereco.numero);
 
  printf("Entre com o número de filhos\n");
  scanf ("%d",&Cidadao.num_filhos);
 
}
