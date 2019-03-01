#include <stdio.h>
 
main ()
{
  // The variables below are all type char, but y is being presented as 65, instead of the ASCII equal "A".
  char x='A',y=65,w=0x41,z;
 
  // Input any char variable.
  scanf("%c",&z);
  
  // Print z according to the ASCII table 
  printf("Caracter lido = %c\n",z);
  
  // Print z in decimal according to the ASCII table. 
  printf("Caracter lido = %d\n",z);
  
  // Print z in hexadecimal according to the ASCII table.
  printf("Caracter lido = %x\n",z);
  
  if (z==x)
      printf("Iguais 1\n");
  if (z==y)
      printf("Iguais 2\n");
  if (z==w)
      printf("Iguais 3\n");
}
