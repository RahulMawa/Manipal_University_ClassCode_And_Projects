#include <stdio.h>
#include <stdbool.h>

int main(){
    //Continue -- skips rest of code and forces to next iteration of the loop
    //Break -- exits a loop / switch

    for(int i = 0; i < 25; i++)
    {
        //skip 13 - unlucky number
        if((i+1) == 13)
        {
            continue;
        }

        //stop at 19 - cz im 19 yrs old
        if((i+1) == 20)
        {
            break;
        }

        printf("%d\n", i+1);
    }

    return 0;
}
