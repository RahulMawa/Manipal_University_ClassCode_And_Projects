#include <stdio.h>
#include <stdbool.h>

int main()
{
    //Array -- data structure that stores many values of the same data type

    int itemList[] = {1, 2, 3, 4, 5, 6, 7};
    double prices[7] = {5.0, 10.0, 15.0, 25.0, 20.0};

    prices[5] = 30.0;
    prices[6] = 35.0;

    printf("\nItem %d: $%.2lf\n", itemList[6], prices[6]);

    printf("\n");

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("\nItem %d: $%.2lf\n", itemList[i], prices[i]);
    }


    return 0;
}