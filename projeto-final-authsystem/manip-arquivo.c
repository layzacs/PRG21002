#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM_TAB2 3


struct tipo_registro2{
   char nome[30];
   int idade;
   float nota_final;
} tab_registros[TAM_TAB2] = {
      {"alfa da silva", 10, 9.5},
      {"beta da silva", 30, 6.9},
      {"epson da silva", 20, 7.5},
   };

/*
  Esta função mostra como salvar a tabela de estruturas na forma de um arquivo texto contendo uma estrutura por lionha. Os campos são separados com :
*/

void salvar_am_arq()
{
  FILE *ptr;
  int i;

  if ((ptr = fopen("teste.dat", "w+"))== NULL) {
     printf("Erro na abertura de arquivo\n");
     exit(-1);
  }
  for (i=0;i<TAM_TAB2;i++)
     fprintf (ptr, "%s:%d:%f\n", tab_registros[i].nome, tab_registros[i].idade, tab_registros[i].nota_final);
  fclose(ptr);
}

/*
  Esta função mostra como recuperar a tabela de estruturas na forma de um arquivo texto contendo uma estrutura por linha. Os campos são separados com :
*/
void restaurar_tab_do_arq()
{
  char buffer[100+1];
  FILE *ptr;
  int ret=0,i=0;

  if ((ptr = fopen("teste.dat", "r"))== NULL) {
     printf("Erro na abertura de arquivo\n");
     exit(-1);
  }
  while  (ret != EOF) {
     ret = fscanf (ptr, " %[^:]:%d:%f", tab_registros[i].nome, &tab_registros[i].idade, &tab_registros[i].nota_final);
     if (ret==3) { /* ret contém o número de itens lidos */
         printf("REGISTRO %d %s %d %f\n",i,tab_registros[i].nome, tab_registros[i].idade, tab_registros[i].nota_final);
    } else if (ret!=EOF)
         printf("Provavelmente existe um erro no arrquivo de dados\n");
    i++;
  }
 fclose(ptr);
}

int main(void){
  salvar_am_arq();
  restaurar_tab_do_arq();
  return 0;

}
