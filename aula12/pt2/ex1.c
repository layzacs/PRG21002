// 1. Implementar um programa para "abrir uma porta" para um usuário que se encontra na tabela acima. 

#include <stdio.h>
#include <string.h>

// Função ilustrativa
void open_door() {
  printf("A porta foi aberta.\n");
}

int main(void) {
  int i, auth=0;
  
  char user[10], 
      tab_users[4][10] = {
         "joao",
         "maria",
         "jose",
         "lara",
      };


  printf("Usuário:\n");
  scanf("%s", user);

  // Função strcmp para comparar duas strings, se as duas forem iguais, retorna 0.
  for (i=0;i<4;i++) {
    if (strcmp(user, tab_users[i]) == 0) {
      open_door();
      auth++;
      break;
    } 
  }
  if (auth == 0) {
    printf("O usuário %s não possui acesso.\n", user);
  }
}
