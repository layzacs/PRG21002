#include <stdio.h>

// Criando um modelo de estrutura sem inicializar nenhuma variável com ele
struct THoras{
   int hora;
   int minuto;
   int segundo;
};

// Os valores inicializados obedecem a ordem de declaração dos campos da estrutura.
struct THoras Ontem = {2,10,57};
 

void main()
{
     struct THoras Hoje;
     Hoje = Ontem;
 
     printf("Hora hoje = %d, Minuto hoje = %d e Segundo hoje %d\n", Hoje.hora, Hoje.minuto, Hoje.segundo);
}
