#include <stdio.h>
#include <stdlib.h>

int main(){
    //Exchanging values using the pointer method
    ///*
    int x, y, temp;
    int *a = &x;
    int *b = &y;

    printf("Enter Values for a and b: \n");
    scanf("%d %d", a, b); //a = &x so dont need to write &a

    temp = *a;
    *a = *b;
    *b = temp;

    printf("New values of a and b are: %d and %d", *a, *b);
    //*/





    //Exchanging values using normal method
    /*
    int a, b, temp;

    printf("Print values of a and b: \n");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("New values of a and b are: %d and %d", a, b);
    */

    return 0;
}