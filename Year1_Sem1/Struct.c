#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Player{
    char name[15];
    int score;
};

int main(){
    //Structs = collection of related elements
        //they can be of different data types
        //pretty much like classes, but with no methods
        //listed under one name in block of memory

    struct Player Player1;
    struct Player Player2;

    strcpy(Player1.name, "Rahul Mawa");
    Player1.score = 52;

    strcpy(Player2.name, "Kevin");
    Player2.score = 24;

    printf("\n%s: %d\n", Player1.name, Player1.score);

    return 0;
}
