#include <stdio.h>

main()
{
  int x,y;

 // This is an infinite loop! The gdb tool would help you see what's wrong. But it is a loop. It's just a really bad one.

  x = 2;
  y = 0;
  while (y<5)
     x++;
  printf ("Valor de x = %d\n",x);
}
