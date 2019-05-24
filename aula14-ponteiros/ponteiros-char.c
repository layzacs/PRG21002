#include <stdio.h>

int main(void)
{
   char x[10]="ifsc";
   char *p;

   // O ponteiro está apontando para o local de memória da posição 2 do vetor x.
   p = &x[2];

   printf("x[2] = %c\n", *p);

   // x é uma string, logo x é um ponteiro também. Está copiando a string de x pra p.
   p = x;

   printf("string %s\n", p);

  //imprime o endereço e o conteúdo de p, que agora é a string "ifsc"
   while (*p!=0) {
       printf("Endereco %p conteúdo %c\n", p,*p);

       // Aqui está incrementando um BYTE no valor do local da memória de p, para continuar imprimindo o valor certo de posição de p.
       // Incrementa um byte porque é char, se fosse int incrementaria 4 bytes.
       p++;
   }
   return 0;
}
