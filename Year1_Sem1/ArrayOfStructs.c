#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
    char name[25];
    float gpa;
} Student;

void printArray(Student array[], int arraySize);

int main(){
    //Array Of Structs = 

    Student student1 = {"Spongebob", 3.0};
    Student student2 = {"Patrick", 2.0};
    Student student3 = {"Your Mom", 2.4};
    Student student4 = {"Leo the Poodle", 2.7};

    Student students[] = {student1, student2, student3, student4};
    int arraySize = sizeof(students) / sizeof(students[0]);

    printArray(students, arraySize);

    return 0;
}

void printArray(Student array[], int arraySize){
    //Print the Array
    for(int i = 0; i < arraySize; i++)
    {
        printf("%s: %.2f\n", array[i].name, array[i].gpa);
        printf("\n");
    }
}
