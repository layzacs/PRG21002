#include <stdio.h>

main() {
  int i,j,margem,linhas_vazadas,colunas;
  char caracter;
  
  // Gathering values to create the image
  printf("Vamos criar uma imagem:\n");
  printf("Insira o caracter a ser usado:\n");
  scanf("%c", &caracter);
  printf("Qual o tamanho da margem? (lado esquerdo)\n");
  scanf("%d", &margem);
  printf("Agora, o número de colunas que terá a imagem:");
  scanf("%d", &colunas);  
  printf("Agora, o número de linhas que terá a imagem:");
  scanf("%d", &linhas_vazadas);
  
  // First line

  for (i=0;i<margem;i++) {
    printf(" ");
  }  
  for (i=0;i<colunas;i++) {
    printf("%c", caracter);
  }
  printf("\n");

  // Cast lines (in-between)

  for (j=0;j<(linhas_vazadas-2);j++) {
    // Adicionando novamente margem
    for (i=0;i<margem;i++) {
      printf(" ");
    }
    if (colunas

//    for (i=0;i<colunas;i++) {
//      if (i==0 && i==colunas) {
//        printf("%c", caracter);
//      }
//      else {
//        printf(" ");
//      }
//    }
//    printf("\n");
//  }

// Last line
  for (i=0;i<margem;i++) {
    printf(" ");
  }  
  for (i=0;i<colunas;i++) {
    printf("%c", caracter);
  }
  printf("\n");
}
