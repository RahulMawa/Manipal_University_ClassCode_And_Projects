#include <stdio.h>
#include <stdbool.h>

void birthday(char name[], int age); //function prototype
double square(double x); // function prototype - 
//helps with keeping the main function at the top of the code
//instead of havin main as the last function

int main(){
    //Example One
    char name[] = "Rahul";
    int age = 19;

    birthday(name, age);
    birthday(name, age);

    //Example Two
    double x = square(3.14159);
    printf("%.2lf", x);


    return 0;
}


void birthday(char name[], int age){
    printf("\nHappy Birthday to you");
    printf("\nHappy Birthday to you");
    printf("\nHappy %d Birthday DEAR %s you", age, name);
    printf("\nHappy Birthday to youuuuuuu\n");
}

double square(double x){
    return x*x;
}
