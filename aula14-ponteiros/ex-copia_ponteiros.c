#include <stdio.h>

int main(void)
{
  int x=10;
  int y, *p, *w;

  p = &x;
  w = &y;

  *w = *p;

  printf("O valor de y ficou: %d\n", y);
}
