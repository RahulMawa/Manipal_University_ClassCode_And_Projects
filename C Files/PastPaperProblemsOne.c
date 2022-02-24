#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int numInput;
    int i = 1;
    int arrCounter = 0;
    int numFactors[5];
    int factorSum = 0;

    do{
            printf("Input an integer greater than 0: \n");
            scanf("%d", &numInput);
    }
    while(numInput < 1);

    while(i < numInput){
        if(numInput % i == 0){
            numFactors[arrCounter] = i;
            arrCounter++;
            factorSum += i;
        }

        i++;
    }

    if(factorSum == numInput){
        printf("Perfect Sum\n");
    }

    for(int j = 0; j < arrCounter; j++){
        printf("Factor %d: %d\n", j, numFactors[j]);
    }

    return 0;
}