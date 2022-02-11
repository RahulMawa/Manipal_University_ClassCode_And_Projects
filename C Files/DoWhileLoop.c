#include <stdio.h>
#include <string.h>

int main(){

    //While Loop -> Checks the condition, then executes the code
    //Do While Loop -> Executes the code, then checks the condition
    
    int number = 0;
    int sum = 0;
    int sumOld;

    do{
        printf("Enter an Integer above zero: \n");
        scanf("%d", &number);
        sumOld = sum;

        //For user input < 0
        while(number <= 0)
        {
            printf("*****Please read the instruction carefully!*****\n");
            printf("Enter an Integer above zero: \n");
            scanf("%d", &number);
            sumOld = sum;
        }

        //For user input > 0
        if(number > 0){
            sum += number;
        }

        printf("Sum got updated from %d to %d\n", sumOld, sum);

         
    } while(number > 0);

    printf("Total Sum: %d", sum);

    return 0;
}