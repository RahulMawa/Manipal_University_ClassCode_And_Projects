#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));

    int number1 = (rand() % 6) + 1;
    int number2 = (rand() % 6) + 1;

    printf("%d\n%d\n", number1, number2);

    return 0;
}
