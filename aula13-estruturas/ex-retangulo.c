// 1. Criar um tipo estrutura que permita representar um retângulo. Criar duas variáveis retângulo e mostrar como as áreas destes retângulos poderiam ser somadas.

#include <stdio.h>
 
 
struct tipo_retang{
  float lado1;
  float lado2;
};
 
main()
{
  struct tipo_retang x,y;
  float area_final;
 
  x.lado1=5.5;
  x.lado2=6.7;
 
  y.lado1=2.3;
  y.lado2=7.9; /* poderia entrar com scanf: scanf("%f",&y.lado2); etc */
 
  area_final = x.lado1*x.lado2 + y.lado1*y.lado2;
 
  printf("Área total dos dois retângulos = %f \n", area_final);  
}

Struct figure.jpg
