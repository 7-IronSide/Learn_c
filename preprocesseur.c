#include <stdio.h>
#define TVA 30
#define afficher printf
#define LONGUEUR 15
#define LARGEUR 38
#define AIR (LONGUEUR + LARGEUR)

/**
 * definir une variable avec ou sans valeur --> #define variable valeur
 * 
 * changer le nom d'une foction --> #define nouveau nom de variable    nom de variable
 * 
 * on peut faire des calcul avec #define
 * 
 */

int main(void)
{
_define();
_afficher();
_calcul();
_nomDuFichier();
_ligneDuFichier();
_dateDeCompilation();
_heureDeCompilation();
}

int _define(void)
{
    int prixHT = 15;
int prixTTC = 0;

prixTTC = prixHT + (prixHT * TVA/100);
printf("%d\n", prixTTC);
    return (0);
}

int _afficher(void)
{
    afficher("Bonjour\n");
}

int _calcul (void)
{
    printf("%d\n", AIR);
}

/**
 * constantes prédéfinies du langage
 * __FILE__ (nom du fichier)
 * __LINE__ (ligne du fichier)
 * __DATE__(date de compilation)
 * __TIME__ (heure de compilation)
 * 
 */

int _nomDuFichier(void)
{
    printf("%s\n", __FILE__);
}

int _ligneDuFichier(void)
{
     printf("%d\n", __LINE__);
}

int _dateDeCompilation(void)
{
    printf("%d\n", __DATE__);
}

int _heureDeCompilation(void)
{
    printf("%d\n", __TIME__);
}