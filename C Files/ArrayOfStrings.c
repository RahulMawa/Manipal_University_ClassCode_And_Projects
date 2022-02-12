#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    char cars[][15] = {"Mustang", "Corvette", "Hyundai"};

    //cars[0] = "Tesla";    //This will not work
    //Use strcpy functions to edit the string 2D Array once assigned
    strcpy(cars[0], "Tesla");

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("\n(%d) %s\n", i+1, cars[i]);
    }

    return 0;
}