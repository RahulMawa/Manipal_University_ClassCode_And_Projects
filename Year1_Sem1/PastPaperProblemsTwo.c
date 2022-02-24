#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    int a, b, c;
    char response = 'n';

    do{
        printf("Enter 3 integers: \n");
        scanf("%d %d %d", &a, &b, &c);

        (a < b) ? (a < c ? printf("%d", a) : printf("%d", c)) : (b < c ? printf("%d", b) : printf("%d", c));

        printf("\nDo you want to repeat? (n or N to stop): \n");
        scanf("%c", &response);
    }
    while(toupper(response) == 'N');

    return 0;
}
