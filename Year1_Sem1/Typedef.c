#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
    char name[25];
    char password[30];
    int id;
} User;

int main(){
    //typedef = reserved keyword that gives a struct/variable data structure a datatype kind calling feature

    User user1 = {"Rahul Mawa", "pswd12345", 123456789};
    User user2 = {"Kevin Rayan", "ewjn339", 123712378};

    printf("%s\t%s\t%d\n", user1.name, user1.password, user1.id);
    printf("%s\t%s\t%d\n", user2.name, user2.password, user2.id);

    return 0; 
}
