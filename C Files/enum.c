#include <stdio.h>
#include <stdbool.h>
#include <string.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main(){
    //enum is used to make code more readable
    //      Kind of called like a datatype
    enum Day today = Sat;

    if(today == Sat || today == Sun){
        printf("Party Time, biiiittchhh\n");
    }
    else{
        printf("I have to work today :/");
    }

    return 0;
}