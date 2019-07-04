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
#include <time.h>

//**********************************************************************;
// definindo valores para fácil customização do código
#define TAM_NAME 20
#define TAM_PASSWD 10
#define TAM_GRUPO 20
#define NUM_USERS 6


//*********************************************************************;
// Estrutura que contém todos os dados do usuário, declarada como global para ser utilizada dentro de todas as funções
struct user {
  char name[TAM_NAME];
  char passwd[TAM_PASSWD];
  char grupo[TAM_GRUPO];
  char msg_logon[50];
  char nascimento[20];
  char name_pai[TAM_NAME];
  char name_mae[TAM_NAME];
  int bloqueio;
};

// cria variável com estrutura criada acima para o admin. usuário admin é criado de forma separada aos demais, pois não precisa de funcionalidades iguais as dos usuários regulares.
struct user admin = {"admin", "admin", "admin", "Bem vindo Administrador", "null", "null", "null", 0};



// cria variável vetor onde cada uma das posições possui todas as "caixas" da estrutura. É possível ver os usuários criados no arquivo database.txt.
struct user user[NUM_USERS];



//****************************************************************;


// Função inicial do programa, responsável por restaurar os valores do arquivo para o vetor users[]. O programa manipula o vetor. Os dados modificados só serão salvos novamente no arquivo quando a função write_db() for chamada.
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
    // ret contém o número de itens lidos, ou seja, são os valores da struct users[] (nome, senha, grupo... totalizam 8 campos).
    // As proximas linhas foram mantidas como comentário no código para debug.
    //
    //if (ret==8) {
    //     printf("REGISTRO %d %s %s %s %s %s %s %s %d\n",i, user[i].name, user[i].passwd,  user[i].grupo,  user[i].msg_logon, user[i].nascimento, user[i].name_pai, user[i].name_mae, user[i].bloqueio);
    //}
    //else if (ret!=EOF)
    //     printf("Provavelmente existe um erro no arquivo de dados\n");
    i++;
  }
 fclose(database);
}


// Função responsável por escrever o vetor user[] no arquivo. Normalmente chamada após o administrador fazer alguma modificação.
void write_db() {
  FILE *database;
  int i;


  if ((database = fopen("database.dat", "w+"))== NULL) {
     printf("Erro na abertura de arquivo\n");
     exit(-1);
  }

  for (i=0;i<NUM_USERS;i++) {
     fprintf (database, " %s:%s:%s:%s:%s:%s:%s:%d\n", user[i].name, user[i].passwd,  user[i].grupo,  user[i].msg_logon, user[i].nascimento, user[i].name_pai, user[i].name_mae, user[i].bloqueio);
  }
  fclose(database);
}


// func responsavel por desbloquear usuario
int unblck_user(char *user_n) {
  int i=0;
  while(i<NUM_USERS){
    if ((strcmp(user[i].name, user_n) == 0)) {
      user[i].bloqueio = 3;
      printf("O usuário %s foi desbloqueado", user_n);
      write_db();
      exit(0);
    }
  i++;
  }
}


// func responsavel por excluir usuario
int remove_user(char *user_n){
  int i=0;
  while(i<NUM_USERS){
    if ((strcmp(user[i].name, user_n) == 0)) {
      // sprintf é a função responsável por trocar o valor da string user.name do nome anterior para o valor 0.
      sprintf(user[i].name, "%s", "0");
      sprintf(user[i].passwd, "%s", "0");
      sprintf(user[i].grupo, "%s", "0");
      sprintf(user[i].msg_logon, "%s", "0");
      sprintf(user[i].nascimento, "%s", "0");
      sprintf(user[i].name_pai, "%s", "0");
      sprintf(user[i].name_mae, "%s", "0");
      user[i].bloqueio = 0;
      printf("user[%d].name = \n", i, user[i].name);
      printf("O usuário %s foi excluido\n", user_n);
      // após modificar o valor da variavel user.nae, o valor é salvo no arquivo usando a função
      write_db();
      exit(0);
    }
  i++;
  }
  exit(0);
}

// func para simular acesso a sala.
int give_access(char *user_grupo) {
  int i;
  time_t timer;
  struct tm *horarioLocal;

  time(&timer); // Função que pega data e hora do sistema do pc
  horarioLocal = localtime(&timer); // Converte a hora atual para a hora local

  int hora = horarioLocal->tm_hour;

  if ((strcmp(user_grupo, "aluno") == 0) && (hora > 13) && (hora < 18)) {
    printf("Entre na sala.\n");
    exit(0);
  }
  if ((strcmp(user_grupo, "professor") == 0) && (hora > 7) && (hora < 20)) {
    printf("Entre na sala.\n");
    exit(0);
  }
  if ((strcmp(user_grupo, "visitante") == 0) && (hora > 13) && (hora < 17)) {
    printf("Entre na sala.\n");
    exit(0);
  }
  else {
    printf("Você não tem permissão para entrar na sala no horário atual: %dhrs\n", hora);
    exit(0);
  }
}

int tools_adm() {
  int num;
  char user_name[TAM_NAME];

  printf("Opções: 1 - desbloquear usuário\n2 - criar novo usuário\n3 - excluir usuário\n4 - editar informações do usuário\n");
  scanf("%d", &num);

  switch(num) {

  // desbloqueia usuário mudando o valor de user[i].bloqueio para 3.
  case 1:
    printf("Digite o nome do usuario que deseja desbloquear:\n");
    scanf("%s", &user_name);

    unblck_user(user_name);

  // cria um novo usuário adicionando os valores no próximo espaço vazio da tabela user.
  case 2:

  // exclui os dados de um usuário de seu local da tabela user.
  case 3:

  printf("Digite o nome do usuario que deseja excluir:\n");
  scanf("%s", &user_name);
  remove_user(user_name);


  // chama a função para editar informações do usuário
  case 4:

  printf("Digite o nome do usuario que deseja editar:\n");
  scanf("%s", &user_name);

  }
}


// func responsavel por adicionar usuario
//int add_user();


//func responsavel por editar usuario
//int edit_user();{

//}

// func responsável por checar nome e senha dos usuários, apresentar a mensagem de boas vindas e permitir acesso a sala.
int login(char *name, char *passwd) {
  int i=0;
  char user_grupo[TAM_GRUPO];

  for (;;) {

    // Inserção de dados pelo usuário
    printf("Usuário:\n");
    scanf(" %s", name);
    fflush(stdin);
    printf("Senha:\n");
    scanf(" %s", passwd);
    fflush(stdin);

    // testa dados inseridos com os valores válidos de cada usuário
    for (i=0;(i < NUM_USERS);(i++)) {

      // Se nome de usuário e senha são do admin, vai para a função de ferramentas do administrador
      if ((strcmp(admin.name, name) == 0) && (strcmp(admin.passwd, passwd) == 0)) {
        printf("%s\n", admin.msg_logon);
        tools_adm();
        break;
      }

      if ((strcmp(admin.name, name) == 0) && (strcmp(admin.passwd, passwd) != 0)) {
        printf("Senha incorreta.\n");
        break;
      }


      if ((strcmp(user[i].name, name) == 0) && (user[i].bloqueio==0)) {
        printf("O usuário %s está bloqueado. Entre em contato com o administrador do sistema.\n", name);
        break;
      }

      // se nome e senha forem iguais aos valores inicializados ou adicionados pelo administrador, mosra imagem de login e garante acesso.
      if ((strcmp(user[i].name, name) == 0) && (strcmp(user[i].passwd, passwd) == 0) && user[i].bloqueio>0) {
        printf("%s\n", user[i].msg_logon);
        strcpy(user_grupo, user[i].grupo);
        give_access(user_grupo);
      }

      // se nome é igual mas senha é diferente, o usuário perde um ponto na var. bloqueio. Quando a var. chega a zero, ele é bloqueado.
      if ((strcmp(user[i].name, name) == 0) && (strcmp(user[i].passwd, passwd) != 0) && user[i].bloqueio>0) {
        user[i].bloqueio--;
        printf("%d\n", user[i].bloqueio);
        printf("Senha Incorreta. Você tem mais %d tentativas.\n", user[i].bloqueio);
        break;
      }
    }
  }
}


//*************************************************************************;

int main(void) {
  // função read_db pega os dados dos usuários do arquivo e salva no formato da struct
  read_db();

  char name[TAM_NAME];
  char passwd[TAM_PASSWD];

  login(name, passwd);

}
