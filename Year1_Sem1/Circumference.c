#include <stdio.h>
#include <math.h>

int main (){
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter your circle radius below: \n");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;

    printf("Your circle circumference is: %lf\n", circumference);

    area = PI * pow(radius, 2);

    printf("Your circle area is: %lf\n", area);

    return 0;

}
