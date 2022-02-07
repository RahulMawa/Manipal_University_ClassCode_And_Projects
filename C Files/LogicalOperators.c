#include <stdio.h>
#include <stdbool.h>

int main(){

    //AND OPERATOR EXAMPLE
    float temp = 25;
    bool sunny = false;

    if(temp >= 0 && temp < 30 &&  sunny == true){
        printf("Weather is good\n");
    }
    else if(temp < 0 && temp > - 20){
        printf("Quite chilly, eh..?\n");
    }
    else{
        printf("Too extreme\n");
    }





    //OR OPERATOR
    

    return 0;
}