#include <stdio.h>



// A passagem de vetor é sempre por referência, escrever "char *pdest" é a mesma coisa que escrever char pdest[x], mas é melhor pq não usa toda a memória necessária para fazer uma copia inteira de uma matriz.
void str_cpy(char *pdest, char *pfonte)
{
   while (*pfonte!=0) {
        *pdest++ = *pfonte++;
   }
   // Colocando o 0 no final da string pdest
   *pdest = 0;
}


int str_len (char *p)
{
   int i=0;
   while (*p++!=0)
		i++;
   return i;
}

int main(void)
{
   char fonte[10]="ifsc";
   char destino[10];

   str_cpy(destino, fonte);
   printf("string destino = %s\n", destino);

   printf("tamanho de dest = %d\n", str_len(destino));
   return 0;
}
