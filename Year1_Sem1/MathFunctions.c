#include <stdio.h>
#include <math.h>

int main(){
    double A = sqrt(9);
    double B = pow(2, 5);
    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = fabs(-99.0);
    double G = log(10);
    double H = sin(45);
    double I = cos(0);

    printf("%.2f\n", A);
    printf("%.2f\n", B);
    printf("%d\n", C);
    printf("%d\n", D);
    printf("%d\n", E);
    printf("%.2f\n", F);
    printf("%.2f\n", G);
    printf("%.2f\n", H);
    printf("%.2f\n", I);

    return 0;
}
