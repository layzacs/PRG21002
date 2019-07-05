//**************************************************************************************************;
// Project           : Sistema de Autenticação de Usuário
//
// Program name      : authsystem.c
//
// Author            : layzacs, murilo jardim
//
// Date created      : 20190702
//
// Purpose           : Programa de autenticação de usuários, salvando seus dados em um arquivo externo, com funções administrativas.
//                     Funcionalidades
//                     - O ADM pode editar os campos, excluir, e adicionar novos usuários.
//                     - Sistema de bloqueio quando o usuário faz três tentativas erradas de fazer login no sistema
//                     - O sistema usa o horário do computador/servidor para limitar o acesso de três grupos: aluno, professor e visitante.
//
//
//
//
//
//
//
// Revision History  :
//
// Date          Author      Ref    Revision (Date in YYYYMMDD format)
// 20190703      layzacs     1      Adicionando usuário admin
//
//**********************************************************************************************************;

#include <stdio.h>
#include <string.h>
// stdlib.h incluida para uso da função exit()
#include <stdlib.h>
#include <time.h>

//**********************************************************************;
// definindo valores para fácil customização do código
#define TAM_NAME 30
#define TAM_PASSWD 10
#define TAM_GRUPO 20
#define TAM_MSG 50
#define NUM_USERS 4


//*********************************************************************;
// Estrutura que contém todos os dados do usuário, declarada como global para ser utilizada dentro de todas as funções
struct user {
  char name[TAM_NAME];
  char passwd[TAM_PASSWD];
  char grupo[TAM_GRUPO];
  char msg_logon[TAM_MSG];
  char nascimento[20];
  char name_pai[TAM_NAME];
  char name_mae[TAM_NAME];
  int bloqueio;
};

// cria variável com estrutura criada acima para o admin. usuário admin é criado de forma separada aos demais, pois não precisa de funcionalidades iguais as dos usuários regulares.
struct user admin = {"admin", "admin", "admin", "Bem vindo Administrador", "null", "null", "null", 0};

// cria variável vetor onde cada uma das posições possui todas as "caixas" da estrutura. É possível ver os usuários criados no arquivo database.txt.
struct user user[NUM_USERS];

//***********************Início funções**********************************;


// Função inicial do programa, responsável por restaurar os valores do arquivo para o vetor users[]. O programa manipula o vetor. Os dados modificados só serão salvos novamente no arquivo quando a função write_db() for chamada.
void read_db() {

  // Código inspirado no exercício da wiki (https://wiki.sj.ifsc.edu.br/wiki/index.php/AULA_22_-_Programa%C3%A7%C3%A3o_1_-_Engenharia) -  Exemplo de gravação de uma tabela com estruturas na forma texto

  char buffer[100+1];

  // declarando a variavel database do tipo FILE
  FILE *database;
  int ret=0,i=0;

  // teste de abertura do arquivo, se não conseguir retorna mensagem de erro. O arquivo é aberto somente para leitura.
  if ((database = fopen("database.dat", "r")) == NULL) {
     printf("Erro na abertura de arquivo\n");
     exit(-1);
  }
  // Os valores inseridos no arquivo são salvos na variável vetor user[i]. EOF = "end of file".
  while  (ret != EOF) {
    ret = fscanf (database, " %[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%d", &user[i].name, &user[i].passwd, &user[i].grupo, &user[i].msg_logon, &user[i].nascimento, &user[i].name_pai, &user[i].name_mae, &user[i].bloqueio);
    //printf("%d\n", ret);
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

  // No if abaixo é aberto o arquivo com "w+", ou seja, o arquivo é aberto pra ser sobrescrito desde o início.
  if ((database = fopen("database.dat", "w+"))== NULL) {
     printf("Erro na abertura de arquivo\n");
     exit(-1);
  }

  // O for abaixo varre os espaços do vetor user[i] e salva os dados da struct no arquivo, separados por um caractere ':'.
  for (i=0;i<NUM_USERS;i++) {
     fprintf (database, " %s:%s:%s:%s:%s:%s:%s:%d\n", user[i].name, user[i].passwd,  user[i].grupo, user[i].msg_logon, user[i].nascimento, user[i].name_pai, user[i].name_mae, user[i].bloqueio);
  }
  fclose(database);
  exit(-1);
}

// Função para simular acesso a sala, fazendo o teste de horário para cada usuário, dependendo de seu grupo.
int give_access(char *user_grupo) {
  int i;
  time_t timer;
  struct tm *horarioLocal;

  time(&timer); // Função que pega data e hora do sistema do pc
  horarioLocal = localtime(&timer); // Converte a hora atual para a hora local

  int hora = horarioLocal->tm_hour;

  if ((strcmp(user_grupo, "aluno") == 0) && (hora > 13) && (hora < 18)) {
    printf("Entre na sala.\n");
    exit(-1);
  }
  if ((strcmp(user_grupo, "professor") == 0) && (hora > 7) && (hora < 20)) {
    printf("Entre na sala.\n");
    exit(-1);
  }
  if ((strcmp(user_grupo, "visitante") == 0) && (hora > 13) && (hora < 17)) {
    printf("Entre na sala.\n");
    exit(-1);
  }
  else {
    printf("Você não tem permissão para entrar na sala no horário atual: %dhrs\n", hora);
    exit(-1);
  }
}

// func responsavel por desbloquear usuario, mudando o valor de bloqueio de 0 para 3
int unblck_user(char *user_n) {
  int i=0;
  while(i<NUM_USERS){
    if ((strcmp(user[i].name, user_n) == 0)) {
      user[i].bloqueio = 3;
      printf("O usuário %s foi desbloqueado", user_n);
      write_db();
    }
  i++;
  }
}

// func responsavel por excluir usuario, reescrevendo as informações sensíveis com o valor "null"
int remove_user(char *user_n){
  int i=0;
  while(i<NUM_USERS){
    if ((strcmp(user[i].name, user_n) == 0)) {
      // sprintf é a função responsável por trocar o valor da string user.name do nome anterior para o valor 0.
      sprintf(user[i].name, "%s", "null");
      sprintf(user[i].passwd, "%s", "null");
      sprintf(user[i].grupo, "%s", "null");
      sprintf(user[i].msg_logon, "%s", "null");
      sprintf(user[i].nascimento, "%s", "null");
      sprintf(user[i].name_pai, "%s", "null");
      sprintf(user[i].name_mae, "%s", "null");
      user[i].bloqueio = 0;
      //printf("user[%d].name = \n", i, user[i].name);  /*linha pra debug*/
      printf("O usuário %s foi excluido\n", user_n);
      // após modificar o valor da variavel user.nae, o valor é salvo no arquivo usando a função
      write_db();
      exit(0);
    }
    else {
    }
  i++;
  }
}

//func responsavel por editar usuario
int edit_user(char *user_n){
  int i=0;

  char new_name[TAM_NAME];
  char new_pass[TAM_PASSWD];
  char new_group[TAM_PASSWD];
  char new_msg[TAM_MSG];
  char new_date[TAM_PASSWD];
  char new_namep[TAM_NAME];
  char new_namem[TAM_NAME];

  while(i<NUM_USERS){
    if((strcmp(user[i].name, user_n)) == 0) {
      int num;

      printf("Opções:\n1 - Editar nome\n2 - Editar Senha\n3 - Editar Grupo\n4 - Editar Mensagem de Logon\n5 - Editar data de Nascimento\n6 - Editar Nome do Pai\n7 - Editar Nome da Mae\n");
      scanf("%d", &num);

      switch (num){
        // Edita a senha do usuario
        case 1:
        printf("Digite o novo nome: \n");
        fflush(stdin);
        scanf(" %[^\n]", &new_name);
        fflush(stdin);
        strcpy(user[i].name, new_name);
        printf("Novo nome: %s\n", user[i].name);
        printf("Nome Gravado.\n");
        write_db();

        case 2:
        printf("Digite a nova senha: \n");
        scanf(" %[^\n]", &new_pass);
        strcpy(user[i].passwd, new_pass);
        printf("Nova senha: %s\n", user[i].passwd);
        printf("Senha Gravada.\n");
        write_db();

        // Edita o grupo
        case 3:
        printf("Digite o grupo que deseja inserir o usuario: (aluno, professor ou visitante)\n");
        scanf(" %[^\n]", &new_group);
        strcpy(user[i].grupo, new_group);
        printf("Grupo Alterado.\n");
	      write_db();

        // Edita a Mensagem
        case 4:
        printf("Digite a nova Mensagem: \n ");
        scanf(" %[^\n]", &new_msg);
        strcpy(user[i].msg_logon, new_msg);
        printf("Mensagem Alterada.\n");
        write_db();


        // Edita a data de Nascimento
        case 5:
        printf("Digite a nova data(formato ddmmaaaa): \n");
        scanf(" %[^\n]", &new_date);
        strcpy(user[i].nascimento, new_date);
        printf("Data Alterada.\n");
        write_db();


        // Edita o nome do pai
        case 6:
        printf("Digite o nome: \n");
        scanf(" %[^\n]", &new_namep);
        strcpy(user[i].name_pai, new_namep);
        printf("Nome Alterado.\n");
        write_db();


        // Edita o nome da mae
        case 7:
        printf("Digite o nome: \n");
        scanf(" %[^\n]", &new_namem);
        strcpy(user[i].name_mae, new_namem);
        printf("Nome Alterado.\n");
        write_db();
      }
    }
    i++;
  }
}

// func responsavel por adicionar usuario
int add_user() {
  int i=0;

  char new_name[TAM_NAME];
  char new_pass[TAM_PASSWD];
  char new_group[TAM_PASSWD];
  char new_msg[TAM_MSG];
  char new_date[TAM_PASSWD];
  char new_namep[TAM_NAME];
  char new_namem[TAM_NAME];

  while(i<NUM_USERS) {
    //printf("user[i].nome=%s\n", user[i].name); /*linha pra debug*/

    if(strcmp(user[i].name, "null")== 0) {
      printf("Digite o nome de Usuario: \n");
      scanf(" %[^\n]", &new_name);
      strcpy(user[i].name, new_name);
      printf("Digite a senha do Usuario: \n");
      scanf(" %[^\n]", &new_pass);
      strcpy(user[i].passwd, new_pass);
      printf("Digite o grupo do Usuario: \n");
      scanf(" %[^\n]", &new_group);
      strcpy(user[i].grupo, new_group);
      printf("Digite a Mensagem de inicio: \n");
      scanf(" %[^\n]", &new_msg);
      strcpy(user[i].msg_logon, new_msg);
      printf("Digite a data de Nascimento(formato ddmmaaaa): \n");
      scanf(" %[^\n]", &new_date);
      strcpy(user[i].nascimento, new_date);
      printf("Digite o nome do pai: \n");
      scanf(" %[^\n]", &new_namep);
      strcpy(user[i].name_pai, new_namep);
      printf("Digite o nome da mae: \n");
      scanf(" %[^\n]", &new_namem);
      strcpy(user[i].name_mae, new_namem);

      user[i].bloqueio = 3;
      write_db();
    }
    i++;
  }
}

int tools_adm() {
  int num;
  char user_name[TAM_NAME];

  printf("Opções:\n 1 - desbloquear usuário\n2 - criar novo usuário\n3 - excluir usuário\n4 - editar informações do usuário\n");
  scanf("%d", &num);
  fflush(stdin);
  switch (num) {

    // desbloqueia usuário mudando o valor de user[i].bloqueio para 3.
    case 1:

    printf("Digite o nome do usuario que deseja desbloquear:\n");
    scanf(" %[^\n]", &user_name);
    fflush(stdin);
    unblck_user(user_name);

    // cria um novo usuário adicionando os valores no próximo espaço vazio da tabela user.
    case 2:
    printf("Digite o nome do usuario que deseja adicionar:\n");
    //scanf("%s", &user_name);
    add_user();

    // exclui os dados de um usuário de seu local da tabela user.
    case 3:

    printf("Digite o nome do usuario que deseja excluir:\n");
    scanf(" %[^\n]", &user_name);
    remove_user(user_name);


    // chama a função para editar informações do usuário
    case 4:

    printf("Digite o nome do usuario que deseja editar:\n");
    scanf(" %[^\n]", &user_name);
    edit_user(user_name);
  }
}
// func responsável por checar nome e senha dos usuários, apresentar a mensagem de boas vindas e permitir acesso a sala.
int login(char *name, char *passwd) {
  int i=0;
  char user_grupo[TAM_GRUPO];

  for (;;) {

    // Inserção de dados pelo usuário
    printf("Usuário:\n");
    scanf(" %[^\n]", name);
    fflush(stdin);
    printf("Senha:\n");
    scanf(" %[^\n]", passwd);
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

//*************************************************************************************************;

int main(void) {

  // usando alocação dinâmica de memória para valor de variavel int
  int *usuarios;
  usuarios = (int *) malloc(sizeof(int));
  *usuarios = NUM_USERS;

  printf("Numero de usuários cadastrados: %d\n", *usuarios);
  // função read_db pega os dados dos usuários do arquivo e salva no formato da struct
  read_db();

  char name[TAM_NAME];
  char passwd[TAM_PASSWD];
  printf("Sistema de Autenticação de usuários\nInsira seus dados abaixo:\n");
  login(name, passwd);
}
