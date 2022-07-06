#include <stdio.h>
#include <stdlib.h>

long add(int a, int b)
{
    return (a + b);
}

long mul (int a, int b)
{
    return (a * b);
}
/*--------------------------------------*/
void exec(long (*iron)(int, int))
{
    printf("%lld\n", iron(3, 4));
}
/*------------------------------------*/
int main(int argc, char **argv)
{
    long (*iron)(int, int); /*déclaration d'une fonction pointeur*/
    long (*side)(int, int);/*déclaration d'une fonction pointeur*/
    iron = &mul;
    side = &add;
    printf("%lld\n", iron(5, 7));
    exec(&mul);
    exec(&add);
    printf("%lld\n", side(5, 7));
    return (0);
}