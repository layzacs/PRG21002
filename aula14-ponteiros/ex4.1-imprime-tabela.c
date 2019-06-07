// No programa acima construir uma função que imprime a Tabela usando ponteiros. A função deve receber como parâmetro um ponteiro para o início da tabela e o tamanho da tabela.
#include <stdio.h>



// variavel global do tipo TRegistro, vetor
struct TRegistro {
   char nome[20];
   int idade;
} Tabela[4] = {
          {"joao",18,},
          {"maria",18,},
          {"jose",19,},
          {"lara",17,},
};

struct TRegistro *p;

int imprime_tabela(struct TRegistro *tab, int indice) {
  int i;
  for (i=0;i<indice;i++) {
    printf("Nome: %s Idade:%d\n", tab[i].nome, tab[i].idade);
  }
}

void MudarStruct(struct TRegistro *p1, int indice)
{
  Tabela[indice] = *p1;
}

int main(void) {
  struct TRegistro aux = {"luisa",16};

  MudarStruct(&aux,2);
  p = &Tabela[2];
  //printf("O nome na posição 2 é %s e idade = %d\n", p->nome,p->idade);

  imprime_tabela(Tabela, 4);
}
