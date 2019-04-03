// A função main sempre vai ser chamada inicialmente.
#include <stdio.h>
 
func4()
{
    printf("Esta é a função func4()\n");
}
 
func3()
{
    printf("Esta é a função func3()\n");
    func4();
}
 
func2()
{
    printf("Esta é a função func2()\n");
}
 
func1()
{
    printf("Esta é a função func1()\n");
    func2();
    func3();
}
 
main()
{
    printf("Esta é a primeira instrução da função main()\n");
    func1();
    printf("Esta é a última instrução da função main()\n");
}
