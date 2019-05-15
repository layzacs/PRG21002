#include <stdio.h>

int main()
{
    //break     -> simplesmente interrompe o nosso ciclo. Vai sair do for e ir para o próximo bloco.
    //continue  -> interrompe o laço (desvia o fluxo para o início do laço, continua dentro do for).

    for(int x = 0; x<=10; ++x){

        //qndo x == 2, interrompa somente o laço atual
        if(x == 2){
            printf("-\n", x);
            continue;
        }

        //Quando chegamos a 8 o looping será finalizado
        if(x == 8){
            printf("-\n", x);
            break;
        }

        printf("%i\n", x);
    }
}
