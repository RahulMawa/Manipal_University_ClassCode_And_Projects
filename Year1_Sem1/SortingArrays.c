#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void sort(int array[], int size);
void printArray(int array[], int size);


int main(){
    int array[] = {9, 7, 6, 10, 2, 1, 3, 8};
    int size = sizeof(array) / sizeof(array[0]); //means the number of elemtns in array

    //Call sort()
    sort(array, size);
    printArray(array, size);

    return 0;
}

void sort(int array[], int size){
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size){
    for(int j = 0; j < size - 1; j++)
    {
        printf("%d\t", array[j]);
    }
}
