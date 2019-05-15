#include <stdio.h>

struct TUsuario /* struct TUsuario é o nome do tipo que está sendo criado */
{
  char userID[20];
  char senha[20];
  int  num_acessos;
} Usuario; /* aqui é definida uma variável do  tipo struct TUsuario */

/* aqui uma tabela/vetor de estruturas */
struct TUsuario TabelaUsuario[20];

main()
{
  /* acessando os campos da estrutura Usuario */
  scanf("%s", Usuario.userId);
  scanf("%s", Usuario.senha);
  Usuario.num_acessos=0;

  /* acessando o campo 10 da tabela de estruturas */
  scanf("%s", TabelaUsuario[10].userID);
  scanf("%s", TabelaUsuario[10].senha);

}
