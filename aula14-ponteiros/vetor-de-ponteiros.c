#include <stdio.h>
 
int main()
{
  int i;
 
  char *vp[4];
  char alfa[5]="IFSC";
  char beta[5]="TELE";
  char delta[5]="RAC";
  char gamma[5]="CGER";
 
  vp[0] = alfa;
  vp[1] = beta;
  vp[2] = delta;
  vp[3] = gamma;  
 
  for(i=0;i<4;i++)
	printf("%s\n", vp[i]); // Ele vai imprimir tudo que cada uma das strings contém
}
