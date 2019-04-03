// Função main() SEMPRE vai ser chamada inicialmente pelo programa.
#include <stdio.h>
 
void func3()
{
    printf("Esta é a função func3()\n");
}
 
void func2()
{
    printf("Esta é a função func2()\n");
}
 
void func1()
{
    printf("Esta é a função func1()\n");
    func2();
    func3();
}
 
void main()
{
    printf("Esta é a primeira instrução da função main()\n");
    func1();
    printf("Esta é a última instrução da função main()\n");
}
