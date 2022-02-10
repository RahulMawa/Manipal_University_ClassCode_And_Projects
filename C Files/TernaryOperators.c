#include <stdio.h>
#include <stdbool.h>

int findMax(int x, int y){
    return (x > y) ? x : y;
}

int main(){
    //Ternary operators are shortcuts to if/else statments
    // FORMAT:
    // (condition) ? value returned if true : value returned if false

    int max = findMax(3, 4);
    printf("%d", max);

    return 0;
}