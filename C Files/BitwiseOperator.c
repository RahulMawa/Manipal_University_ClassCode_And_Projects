#include <stdio.h>
#include <string.h>

int main(){
    //BITWISE OPERATORS = are special operators used in bit level programming
        //based on Binary

    //  & = AND
    //  | =  OR
    //  ^ = XOR
    // << = Left Shift
    // >> = Right Shift

    int x = 6;  // 00000110 = 6
    int y = 12; // 00001100 = 12
    int z = 0;  // 00000000 = 0

    z = x & y;
    printf("AND = %d\n", z); // 00000100 = 4
    
    z = x | y;
    printf("OR = %d\n", z); // 00001110 = 14

    z = x ^ y;
    printf("XOR = %d\n", z); // 00001010 = 10

    z = x << 2;
    printf("Left Shift = %d\n", z); // 00011000 = 24

    z = y >> 1;
    printf("Right Shift = %d\n", z); //00000110 = 6


    return 0;
}