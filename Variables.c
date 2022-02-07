#include <stdio.h>
#include <stdbool.h>

int main(){
    /*Coding a Variable takes 2 steps:
        1. Declaration - Data type
        2. Initialisation - The initial value it holds
    */




   //FORMAT:
   //DataType VariableName = Initialisation; //Format Specifiers

   int age = 123; //Integers -- %d
   float gpa = 3.9; //Decimal -- %f
   double d = 3.141592653589793; //Double -- %1f
   char grade = 'C'; //Single Characters -- %c
   char name[] = "Rahul"; //Array of characters -- %s
   bool e = true; //Boolean -- %d
   
   printf("Your Name is: %s\n", name);
   printf("My age is: %d\n", age);
   printf("%s is %d years old, and got a %c grade due to his gpa being a %f\n", name, age, grade, gpa);






   //SPECIAL THING ABOUT CHAR VARIABLES
   char f = 'x';    //1 Byte of storage (-128 to 127) -- %c or %d [%d is for ascii]
   char n = 110;    //1 Byte of storage (-128 to 127) -- %c or %d [%d is for ascii]
   unsigned char x = 255; //1 Byte of storage (0 to +255) -- %c or %d

   short shortInt = 32767; //2 Bytes (-32768 to 32767) -- %d
   unsigned short shortInt2 = 65535; //2 Bytes (0 to 65535) -- %d

   int int1 = 82763238; //4 Bytes -- %d
   unsigned int2 = 972980382; //4 Bytes -- %u

   long longInt = 29479284202809; // 8 Bytes -- %lld
   unsigned long longInt2 = 347347238703820; //8 Bytes -- %llu

   printf("%c\n", n);
   printf("%d\n", f);
   






   /*
   EXAMPLE USE FOR FORMAT SPECIFIERS
   */
   float item1 = 5.99;
   float item2 = 10.00;
   float item3 = 99.99;

   printf("Item Price: %5.2f\n", item1); //5 stands for right indentation 
   printf("Item Price: %5.2f\n", item2); //2 stands for 2 decimal points
   printf("Item Price: %5.2f\n", item3);






   //CONSTANTS
   const float PI = 3.14159;

   return 0;
}