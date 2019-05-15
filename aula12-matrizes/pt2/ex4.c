// No exercício anterior, acrescente uma tabela de contadores que permite armazenar o número de tentativas seguidas de um usuário, no caso de erro de senha. Se o número de tentativas for maior que 3 a porta não deverá mais ser aberta para o usuário (usuário bloqueado).

#include <stdio.h>
#include <string.h>

// Função ilustrativa
void open_door() {
  printf("A porta foi aberta.\n");
}

int teste_usuario(char tab_users[4][10], char tab_senhas[4][10]) {
  int broke=0, i=0;
  int bloqueio[4]={0,0,0,0};
  char user[10], passwd[10];

  for (;;) {

    if (broke == 1)
      break;

    printf("Usuário:\n");
    scanf("%s", user);


    if ((user[0] == 'f') && (user[1] == 'i') && (user[2] == 'm') && (user[3] == 0)) {
      break;
    }

    printf("Senha:\n");
    scanf("%s", passwd);


    for (i=0;i<4;i++) {

      if ((strcmp(user, tab_users[i]) == 0) && (bloqueio[i]==3)) {
        printf("Usuário bloqueado.\n");
        break;
      }

      if ((strcmp(user, tab_users[i]) == 0) && (strcmp(passwd, tab_senhas[i]) == 0)) {
        open_door();
        broke++;
        break;
      }

      if ((strcmp(user, tab_users[i]) == 0) && (strcmp(passwd, tab_senhas[i]) != 0)) {
        bloqueio[i] = (bloqueio[i] + 1);
        printf("Você tem mais %d tentativas.\n", ((bloqueio[i]-3)*-1));
        break;
      }
    }
  }
}

int main(void) {
  int i, auth=0;


  char tab_users[4][10] = {"joao","maria","jose","lara"},
       tab_senhas[4][10] = {"joaozinho","mariazi","zezinho","larinha"};

  teste_usuario(tab_users, tab_senhas);
}
