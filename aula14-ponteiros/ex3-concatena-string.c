 // Implementar a função str_cat que concatena duas strings usando ponteiros.

#include <stdio.h>

void str_cat(char *p1, char *p2) {
  int i, j;
  for (i=0;p1[i]!=0;i++) {
  }
  for (j=0;p2[j]!=0;j++) {
    *p1[i]=p2[]
  }
}

/* exemplo de uso da função */
int main()
{
  char vet1[30]="IFSC";
  char vet2[20]="-SC";

  str_cat(vet1,vet2);
  printf("%s",vet1); /* aqui deveria imprimir "IFSC-SJ" */
  return (0);
}
