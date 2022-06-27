#include <stdio.h>
#include <stdlib.h>
// Allocatio de mémoire
// la mémoire allouée a liste de joueur 
//est fonction de nombre de joueur entrée par l'utilisateur

int main(void)
{
    int nombre_de_joueurs = 2;
    int *liste_de_joueurs = NULL;
    int i;


    liste_de_joueurs = malloc(nombre_de_joueurs * sizeof(int));

    if (liste_de_joueurs == NULL)
    {
    exit(1);
    }

    for (i = 0; i < nombre_de_joueurs; i++)
    {
        printf("joueur%d -> numero %d\n", i + 1, i * 3);
        liste_de_joueurs[i] = i * 3;
    }
    
    for (i = 0; i < nombre_de_joueurs; i++)
    {
        printf("[%d]", liste_de_joueurs[i]);
        
    }
    printf("adresse liste de joueur %p", liste_de_joueurs);
printf("\n--------------------------------------------------------\n");
nombre_de_joueurs = 5;
liste_de_joueurs = realloc(liste_de_joueurs, nombre_de_joueurs * sizeof(int));
 if (liste_de_joueurs == NULL)
    {
    exit(1);
    }

    for (i = 0; i < nombre_de_joueurs; i++)
    {
        printf("joueur%d -> numero %d\n", i + 1, i * 3);
        liste_de_joueurs[i] = i * 3;
    }
    
    for (i = 0; i < nombre_de_joueurs; i++)
    {
        printf("[%d]", liste_de_joueurs[i]);
       
        
    }
 printf("adresse liste de joueur %p", liste_de_joueurs);
    free(liste_de_joueurs);

    return (0);
}