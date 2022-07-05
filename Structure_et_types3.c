#include <stdio.h>

/*creer une variable de type booleen grace a une enumeration*/
typedef enum Booleen 
{
    false, /*0*/
    true /*1*/
}Booleen;

int main(void)
{
    Booleen jeu_lance = true;
    if(jeu_lance == true)
    {
        printf("Teste de la variable booleen\n");
    }

    return (0);
}