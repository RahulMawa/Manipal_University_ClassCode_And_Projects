#include <stdio.h>
#include <stdbool.h>

int main(){
    //2D Array = an array, where each element is an entire array,
            // useful for matrix creation, lists and grids
    
    int numbers[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int numRows = sizeof(numbers) / sizeof(numbers[0]);
    int numColumns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    numbers[0][0] = 1;

    //Print Each Row
    for(int i = 0; i < numRows; i++)
    {
        //Print Each Column
        for(int j = 0; j < numColumns; j++)
        {
            printf("%d\t", numbers[i][j]);
        }

        printf("\n");
    }

    printf("Fun Fact: Num Of Rows is %d and Columns is %d", numRows, numColumns);

    return 0;
}
