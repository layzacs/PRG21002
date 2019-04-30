// No exercício anterior, acrescente a figura do administrador (armazenado separadamente como user "admin" e senha "12345". Ao logar o administrador será questionado por um usuário a ser desbloqueado. O administrador entra com o usuário a ser desbloquedo e o sistema volta a perguntar por um userID.

#include <stdio.h>
#include <string.h>

// Método para desbloquear um usuário bloqueado.
int desbloqueia_user(char tab_users[4][10], int bloqueio[4]) {
  int i;
  char j;
  for (i=0;i<4;i++) {
    if (bloqueio[i] == 3) {
      printf("O usuário %s está bloqueado. Deseja desbloquear? (S/N)\n", tab_users[i]);
      scanf(" %c", &j);
      printf("j = %c\n", j);
      if (j == 'S') {
        bloqueio[i] = 0;
      }
    }
  }
  printf("Desconectando do modo admin...\n");
  return bloqueio;
}

// Método ilustrativo
void open_door() {
  printf("A porta foi aberta.\n");
}


int teste_usuario(char tab_users[4][10], char tab_senhas[4][10]) {
  int broke=0, i=0;
  int bloqueio[4]={0,0,0,0};
  char user[10], passwd[10];

  // Loop infinito, só será quebrado caso seja inserido usuário e senha válidos ou seja digitado fim
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

    if ((strcmp(user, "admin") == 0) && (strcmp(passwd, "admin") == 0)) {
      printf("Bem vindo administrador.\n");
      desbloqueia_user(tab_users, bloqueio);
    }

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
