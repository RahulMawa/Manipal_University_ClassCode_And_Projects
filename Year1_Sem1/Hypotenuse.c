#include <stdio.h>
#include <math.h>

int main(){
    double a;
    double b;
    double c;


    printf("Enter side A Dimensions below: \n");
    scanf("%lf", &a);

    printf("Enter side B Dimensions below: \n");
    scanf("%lf", &b);

    c = sqrt(pow(a, 2) + pow(b, 2));
    printf("Side C (Hyp.) Dimensions: %.2lf\n", c);
    return 0;
}
