#include <stdio.h>

int main(){
   //Pointers Program Number 4
   //Accessing arrays and elements through pointers
   const int arrayNum = 5;
   int *p = NULL;
   int *l = NULL;
   int temp;
   int sumElements = 0;

   int arr[arrayNum] = {1, 2, 3, 4, 5};
   //printf("%p\n", &arr); //address of arr[0]

    for(int i = 0; i < arrayNum; i++){
       printf("%p\n", &arr[i]);
       printf("%d\n", arr[i]);
       sumElements += arr[i];
    }

    p = &arr[3];
    l = &arr[4];

    temp = *p;
    *p = *l;
    *l = temp;

    printf("Element 5: %d | Element 4: %d | Sum of all Elements: %d", *p, *l, sumElements);



    return 0;
}