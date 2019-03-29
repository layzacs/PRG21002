#include <stdio.h>
// void ou int não importa pois a função não vai retornar nada.
void main () {

// Declarando a string. Sempre vai ser declarada como tipo char. o formato de vetor é "vetor[numero-de-posições-na-memoria]"
// char alfa[4]="IFSC" - Para iniciar uma string já com um valor dentro 
   char alfa[50];
 
   int i=0;


   printf ("Entre com a cadeia: ");

// Pra ler a string é %s e o nome da variável. não precisa do '&' antes do alfa porque ele tá lendo a string e não inserindo um único valor em um espaço de memoria.
// scanf("%[^\n]s",alfa) - Para o scanf aceitar os espaços sem mandar a outra palavra pra uma próxima string: 
   scanf("%s",alfa);
   
// enquanto o valor no espaço i da string alfa for diferente de null, soma mais um.
   while(alfa[i]!=0)
	   i++;
  
// printf vai retornar o número de caracteres (espaços) tem na string alfa.  
   printf ("\nNumero de caracteres em %s = %d \n", alfa, i);
}
