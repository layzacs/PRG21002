// Implementar uma modificação do exercício anterior que permite ao programa ficar em loop até que se entre com userID igual a "fim".
#include <stdio.h>
#include <string.h>

// Função ilustrativa
void open_door() {
  printf("A porta foi aberta.\n");
}

int main(void) {
  int i, auth=0;
  int broke=0;

  char user[10], passwd[10],
      tab_users[4][10] = {"joao","maria","jose","lara"},
      tab_senhas[4][10] = {"joaozinho","mariazi","zezinho","larinha"};
  // Função strcmp para comparar duas strings, se as duas forem iguais, retorna 0.
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
        if ((strcmp(user, tab_users[i]) == 0) && (strcmp(passwd, tab_senhas[i]) == 0)) {
          open_door();
          broke++;
          break;
        }
      }
    }
}
