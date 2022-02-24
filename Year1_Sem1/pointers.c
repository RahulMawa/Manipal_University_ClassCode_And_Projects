#include <stdio.h>
#include <stdlib.h>

void printAge(int *pAge);

int main(){
    //POINTERS = a variable-like reference that hold memory address to another variable, array etc..
        // * = indirection operator (used during declaration and viewing value stored at the stored address)
    
    int age = 21;
    int num = 33;
    int *pNum = NULL; //Good practice to declare it as NULL instead of "int *pNum;"
    int *pAge = &age;

    pNum = &num;

    printAge(pAge);

    return 0;
}

void printAge(int *pAge){
    printf("Pointer Address Stored: %p\n", pAge);
    printf("Pointer Value Stored: %d\n", *pAge);
}
