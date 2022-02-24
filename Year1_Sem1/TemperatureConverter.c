#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){
    char unit;
    double temp;

    printf("Is temperature in (C) or (F): \n");
    scanf("%c", &unit);
    unit = toupper(unit);

    printf("Enter the temp in \'%c\'\n", unit);
    scanf("%lf", &temp);

    switch(unit){
        case 'C':
            printf("Enter the temp in \'%c\'\n", unit);
            scanf("%lf", &temp);
            temp = 1.8*temp + 32;
            printf("Temp in Farenheit: %.2lf\n", temp);
            break;

        case 'F':
            temp = (temp - 32) * 5/9;
            printf("Temp in Celcius: %.2lf\n", temp);
            break;

        defualt:
            printf("Please enter a valid option");
    }

    

    return 0;
}
