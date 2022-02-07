#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
    int age;

    printf("Enter your age below:\n");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are an adult\n");
    }
    else if(age > 100){
        printf("You are about to die. lol\n");
    }
    else if(age > 0){
        printf("You are a kid. i hate kids\n");
    }
    else{
        printf("You are a Chutiya\n");
    }
    return 0;
}