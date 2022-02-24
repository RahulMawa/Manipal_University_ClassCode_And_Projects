#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    const int MIN = 1;
    const int MAX = 100;
    int userInput;
    int numGuesses = 0;
    int answer;

    srand(time(0));

    answer = (rand() % MAX) + MIN;
    printf("LETS PLAY A GUESSING GAME!\n");


    while(numGuesses < 5 && userInput != answer)
    {
        printf("GUESS A NUMBER BETWEEN %d AND %d BELOW:\n", MIN, MAX);
        scanf("%d", &userInput);

        if(userInput == answer)
        {
            printf("Congrats, wtf are you doing with your life tho..?");
            return 0;
        }
        numGuesses++;
    }

    printf("The answer was: %d... Boo Hoo :(", answer);

    return 0;
}
