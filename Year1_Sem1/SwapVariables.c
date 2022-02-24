#include <stdio.h>
#include <string.h>

int main(){
    //FOR VARIABLES 
    char x = 'X';
    char y = 'Y';
    char temp;  //temp stands for temporary

    printf("***VARIABLES BEFORE: \n");
    printf("X: %c\n", x);
    printf("Y: %c\n", y);

    temp = x;
    x = y;
    y = temp;

    printf("***VARIABLES AFTER: \n");
    printf("X: %c\n", x);
    printf("Y: %c\n", y);



    //FOR ARRAYS 
    char x2[15] = "water";
    char y2[15] = "milk";
    char temp2[15];  //temp stands for temporary

    printf("\n");
    printf("***ARRAYS BEFORE: \n");
    printf("X: %s\n", x2);
    printf("Y: %s\n", y2);

    strcpy(temp2, x2);
    strcpy(x2, y2);
    strcpy(y2, temp2);

    printf("***ARRAYS AFTER: \n");
    printf("X: %s\n", x2);
    printf("Y: %s\n", y2);

    return 0;
}
