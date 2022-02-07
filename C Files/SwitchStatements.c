#include <stdio.h>
#include <stdbool.h>

int main(){
    char grade;

    printf("Enter your Maths Grade below: \n");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Perfect Score\n");
            break;

        case 'B':
            printf("Good score\n");
            break;

        case 'C':
            printf("Its alright\n");
            break;

        case 'D':
            printf("I mean, at least its not an F\n");
            break;

        case 'F':
            printf("Damn. RIP\n");
            break;

        default:
            printf("Enter a Valid Score pls. thx\n");
    }

    return 0;
}