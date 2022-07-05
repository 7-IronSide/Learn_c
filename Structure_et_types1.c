#include <stdio.h>
#include <string.h>

typedef struct Player
{
    signed char username[256];
    int hp;
    int mp;

}Player;

int main(void)
{
     Player P1 = {"jason", 100, 100};

    printf("Nom du joueur : %s\n", P1.username);
    printf("PV : %d | PM : %d\n", P1.hp, P1.mp);
printf("--------------------------------------\n");
    strcpy(P1.username, "IronSide");
    P1.hp -= 50;

    printf("Nom du joueur : %s\n", P1.username);
    printf("PV : %d | PM : %d\n", P1.hp, P1.mp);
    
    return (0);
}