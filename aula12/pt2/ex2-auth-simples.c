// 2. Implementar uma tabela adicional com senhas dos usuários. O acesso deve ser concedido somente se o usuário for validado e a senha. Defina as tabelas como variáveis globais. 
 
#include <stdio.h>
#include <string.h>

// Função ilustrativa
void open_door() {
  printf("A porta foi aberta.\n");
}

int main(void) {
  int i, auth=0;
  
  char user[10], passwd[10], 
      tab_users[4][10] = {
        "joao",
        "maria",
        "jose",
        "lara",
      },
      tab_senhas[4][10] = {
        "joaozinho",
        "mariazi",
        "zezinho",
        "larinha",
      };

  printf("Usuário:\n");
  scanf("%s", user);

  printf("Senha:\n");
  scanf("%s", passwd);
  // Função strcmp para comparar duas strings, se as duas forem iguais, retorna 0.
    for (i=0;i<4;i++) {
      if ((strcmp(user, tab_users[i]) == 0) && (strcmp(passwd, tab_senhas[i]) == 0)) {
        open_door();
        break;
      } 
    }
  if (i == 4) {
    printf("O usuário %s não possui acesso ou a senha está errada.\n", user);
  }
}
