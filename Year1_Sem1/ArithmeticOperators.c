#include <stdio.h>
#include <stdbool.h>

int main(){

    /* -------------------------------------------

    + --- Sum
    - --- Minus
    * --- Multiply
    / --- Division
    % --- Modulus
    ++ --- Increment by One
    -- --- Decrement by One
    & --- Address Of

   ------------------------------------------- */

   int x = 5;
   int y = 2;

   int z = x + y;
   printf("%d", z);
   int z = x - y;
   printf("%d", z);
   int z = x * y;
   printf("%d", z);
   float z = x / (float) y;
   printf("%f", z);
   int z = x % y;
   printf("%d", z);


   /* Augmented Assignment Operators
   ----- Short Form
   */

   x+=2;
   x-=2;
   x*=2;
   x/=2;
   x%=2;


}
