#include <stdio.h>
#include <string.h>

/*
(*mon pointeur). un_champ = x;
mon pointeur ->  un_champ = x;
*/

typedef struct Player
{
    signed char username[256];
    int hp;
    int mp;

}Player;

void createPlayer(Player *P)
{
    strcpy(P->username, "IronSide");
    P->hp = 100;
    P->mp = 80;
}

int main(void)
{
    Player P1 = {"", 0, 0};

    createPlayer(&P1);

    printf("Nom du joueur : %s\n", P1.username);
    printf("PV : %d | PM : %d\n", P1.hp, P1.mp);

    return (0);
}