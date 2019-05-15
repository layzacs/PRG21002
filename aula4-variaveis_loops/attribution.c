#include <stdio.h>

// "=" means ATTRIBUTION

main()
{
  int x,y,w; // You can put all of them in the same line :D

  x=1;
  w=y=x+1; // The computer is reading in the order: add 1 to x. Give y the value o x, and after that give w the value of y.

  printf("x=%d y=%d w=%d\n", x,y,w);

  w=2*(y=x+1); // Parentesis first. The computer is reading in the order: add 1 to x and give it to y, then do y*2, and give the value to w.
  printf("x=%d y=%d w=%d\n", x,y,w);

}
