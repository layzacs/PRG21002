#include <stdio.h>
 
struct TEndereco{
     char rua[50];
     char numero[10];
};
 
struct TCidadao{
  char nome[50];
  char cpf[20];
  struct TEndereco endereco;
  int num_filhos;
};
 
void main()
{
  struct TCidadao Cidadao = {"Maria",
                             "42342342234",
                             {"Rua AlfaBeta","145"},
                             5;
                            };
 
  printf("Rua do cidadao = %s\n", Cidadao.endereco.rua);
 
}
