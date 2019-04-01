// 6. Modificar o exercício anterior para que os caracteres não iguais sejam intercambiados (mas continue respeitando os finais das cadeias). Exemplo: "casa" e "malagueta" deve resultar em "mala" e "casagueta"
#include <stdio.h>

int main () {
  int i;
  char stp[40], sts[40], troca=0;

  printf("Entre com a frase número 1:\n");
  scanf(" %[^\n]s", stp);

  printf("Entre com a frase número 2:\n");
  scanf(" %[^\n]s", sts);

  printf("As frases são: %s e %s\n", stp, sts);

  for (i=0;i<40;i++) {
    if ((stp[i]!=sts[i]) & (stp[i]!=0) & (sts[i]!=0)) {
      troca = stp[i];
      stp[i] = sts[i];
      sts[i] = troca;
    }
    else if ((stp[i]==0) & (sts[i]==0))
      break;
  }
  printf("O resultantes: %s e %s\n", stp, sts);
}
