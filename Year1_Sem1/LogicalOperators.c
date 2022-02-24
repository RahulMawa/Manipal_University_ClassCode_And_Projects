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



    //OR OPERATOR EXAMPLE
    float temp2 = 35;

    if(temp2 < 0 || temp2 > 30){
        printf("Weather is kinda bad dude");
    }
    else{
        printf("The weather is good");
    }

    


    //NOT OPERATOR EXAMPLE
    bool sunny = true;

    if(!sunny){
        printf("It must be cloudy outside");
    }
    else{
        printf("Must be sunny outside");
    }


    






    //OR OPERATOR


    return 0;
}
