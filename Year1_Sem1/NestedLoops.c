#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    //Nested Loops - Loop inside of a loop
    
    //Variable Declaration
    int rows;
    int columns;
    char symbol = ' ';

    //User Input
    printf("No. of rows: \n");
    scanf("%d", &rows);

    printf("No. of columns: \n");
    scanf("%d", &columns);

    scanf("%c"); //to get rid of the buffer, that saves \n instead of input_symbol in the variable
    printf("Character for rectangle design: \n");
    scanf("%c", &symbol);

    //Rectangle for Nested Loop
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < columns ; j++)
        {
            printf("%c", symbol);
        }

        printf("\n");
    }


    
    return 0;
}
