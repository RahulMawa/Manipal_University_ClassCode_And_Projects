#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Some Math RULES for pointers
    1) Pointers can not be used for multiplication / division, eg: (p1 * 35 / p2)
    2) Two pointers can not be added, eg: (p1 + p2)
    */



    //Basic Math with pointers 1
    int a = 10;
    int b = 20;

    int *p1 = &a;
    int *p2 = &b;

    int outputNum = *p1 + *p2;
    printf("Result of p1 + p2: %d\n", outputNum);
    int outputNum = *p2++;
    printf("Increment of p2 is: %d\n", outputNum);

    
    
    //Basic Math with pointers 2
    //this is more theory than practical.. 
    int memorySum = 0;
    //memorySum = p1 + 2; 
    //if memory address of p1 is 2048, 
    //then 2048 + 2 is actually 2048 + (4*2).. bcz int contains 4 bytes
    printf("Memory address is: %p and Memory Sum is: %d", p1, memorySum);




    //Basic Math with pointers 3
    if(p1 < p2){
       printf("a is stored before b in memory");
    }
    else if(p1 > p2){
       printf("a is stored after b is in memory");
    }
    else if(p1 == p2){
       printf("a and b are stored in the same location");
    }
    else if(p1 != p2){
       printf("a and b are stored in separate addresses");
    }
    else{
       printf("Error.");
    }




   //Pointers Program Number 4
   //

   




    return 0;
}