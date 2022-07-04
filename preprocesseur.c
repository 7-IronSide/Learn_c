#include <stdio.h>
#define TVA 30
#define afficher printf
#define LONGUEUR 15
#define LARGEUR 38
#define AIR (LONGUEUR + LARGEUR)
#define PI 22/7.0

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
_Area();
_afficher();
_calcul();
constantesPredef();
}

int _define(void)
{
    int prixHT = 15;
int prixTTC = 0;

prixTTC = prixHT + (prixHT * TVA/100);
printf("%d\n", prixTTC);
    return (0);
}

int _Area(void)
{
    double areaOfCircle = PI * 10 * 10;
    printf("Area = %lf\n", areaOfCircle);
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
 * __STDC__ (1 pour ANSI supporté par le compilateur 0 pour non supporté)
 * 
 */

int constantesPredef(void)
{
    printf("Fichier: %s\n", __FILE__);
    printf("Ligne: %d\n", __LINE__);
    printf("Date: %d\n", __DATE__);
    printf("Temps: %d\n", __TIME__);
    printf("ANSI: %d\n", __STDC__);
}
