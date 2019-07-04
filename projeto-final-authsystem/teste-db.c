//**********************************************************************;
// Project           : Sistema de Autenticação de Usuário
//
// Program name      : authsystem.c
//
// Author            : layzacs, murilo jardim
//
// Date created      : 20190702
//
// Purpose           : Programa de autenticação de usuários, salvando seus dados em um arquivo externo, com funções administrativas.
//
// Revision History  :
//
// Date          Author      Ref    Revision (Date in YYYYMMDD format)
// 20190703      layzacs     1      Adicionando usuário admin
//
//**********************************************************************;

#include <stdio.h>
#include <string.h>
// stdlib.h incluida para uso da função exit()
#include <stdlib.h>

//**********************************************************************;
// definindo valores para fácil customização do código
#define TAM_NAME 20
#define TAM_PASSWD 10
#define NUM_USERS 3


//*********************************************************************;
// Estrutura que contém todos os dados do usuário, declarada como global para ser utilizada dentro de todas as funções
struct user{
  char name[TAM_NAME];
  char passwd[TAM_PASSWD];
  char grupo[10];
  char msg_logon[50];
  char nascimento[20];
  char name_pai[TAM_NAME];
  char name_mae[TAM_NAME];
  int bloqueio;
};

// cria variável com estrutura criada acima para o admin. usuário admin é criado de forma separada aos demais, pois não precisa de funcionalidades iguais as dos usuários regulares.
struct user admin = {"admin", "admin", "0", "Bem vindo Administrador", "null", "null", "null", 0};



// cria variável vetor onde cada uma das posições possui todas as "caixas" da estrutura. Apenas os 3 primeiros usuários foram inicializados.
struct user user[NUM_USERS];

// Função responsável por restaurar os valores do arquivo para o programa, onde eles serão lidos/manipulados.
void read_db() {

  // Código inspirado no exercício da wiki (https://wiki.sj.ifsc.edu.br/wiki/index.php/AULA_22_-_Programa%C3%A7%C3%A3o_1_-_Engenharia) -  Exemplo de gravação de uma tabela com estruturas na forma texto

  char buffer[100+1];

  FILE *database;
  int ret=0,i=0;

  // teste de abertura do arquivo, se não conseguir retorna mensagem de erro
  if ((database = fopen("database.dat", "r"))== NULL) {
     printf("Erro na abertura de arquivo\n");
     exit(-1);
  }

  while  (ret != EOF) {
     ret = fscanf (database, " %[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%d", &user[i].name, &user[i].passwd, &user[i].grupo, &user[i].msg_logon, &user[i].nascimento, &user[i].name_pai, &user[i].name_mae, &user[i].bloqueio);
     printf("%d\n", ret);
     if (ret==8) { /* ret contém o número de itens lidos */
         printf("REGISTRO %d %s %s %s %s %s %s %s %d\n",i, user[i].name, user[i].passwd,  user[i].grupo,  user[i].msg_logon, user[i].nascimento, user[i].name_pai, user[i].name_mae, user[i].bloqueio);
    }
    else if (ret!=EOF)
         printf("Provavelmente existe um erro no arquivo de dados\n");
    i++;
  }
 fclose(database);
}

//*************************************************************************;

int main(void) {


  // função read_db pega os dados dos usuários do arquivo e salva no formato da struct
  read_db();

  char name[TAM_NAME];
  char passwd[TAM_PASSWD];

}
