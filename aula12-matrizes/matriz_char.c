include <stdio.h>
 
main()
{
  char TabelaUsuarios[4][10] = {
         "joao",
         "maria",
         "jose",
         "lara",
                                };
  int i;
 
  for (i=0;i<4;i++)
       printf("%s\n",&TabelaUsuarios[i][0]);
}
