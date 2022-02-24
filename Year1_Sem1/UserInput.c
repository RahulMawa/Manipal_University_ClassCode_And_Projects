#include <stdio.h>
#include <stdbool.h>

int main(){
    int age;
    char name[25] = "";
    


    printf("How old are you..?\n");
    scanf("%d", &age);

    printf("What's your name..?\n");
    scanf("%s", &name);

    printf("%s is %d years old\n", name, age);
    

    return 0;
}
