#include <stdio.h>
#include <stdlib.h>

int main(){
    //Memory = street
    //Memory Block = House
    //Memory Address = House Address, for eg: Street name, House number

    double a = 'X';
    double b = 'Y';
    double c = 'Z';
    char name[2]; 

    printf("%d Bytes\n", sizeof(a));
    printf("%d Bytes\n", sizeof(b));
    printf("%d Bytes\n", sizeof(c));
    printf("%d Bytes\n", sizeof(name));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &name);


    return 0;
}