#include <stdio.h>
#include <math.h>

int main (){
    const double PI = 3.14159;
    double radius;
    double circumference;

    printf("Enter your circle radius below: \n");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;

    printf("Your circle circumference is: %lf\n", circumference);

    return 0;

}