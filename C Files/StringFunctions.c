#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    char string1[] = "Rahul";
    char string2[] = "Rocks";

    /*LIST OF USEFUL STRING FUNCTIONS:
    1. strlwr(name);        --- lower case
    2. strupr(name);        --- upper case
    3. strcat(firstName, lastName);      --- concatenates both strings 
    4. strncat(firstName, lastName, n);     --- conactenates n number of letters from string 2 to the end of string 1
    5. strcpy(string1, string2);     --- copy string 2 to string1
    6. strncpy(string1, string2, n);       --- copy n number of characters from string2 to string1

    7. strset(string1, '?');        --- set all characters in the string as the char
    8. strnset(string1, '$', 3);        --- set n characters of string as char
    9. strrev(string2);        --- reverse string

    => These functions Returns INT values:
    10. strlen(string1);        --- returns int of num. of characters in string
    11. strcmp(string1, string2);       --- if string1 and string2 are same, then int is returned as 0, else is 1
    12. strncmp(string1, string2, 4);       --- compare n char of string1 and string2
    13. strcmpi(string1, string2);        --- compares string ignoring case
    14. strnicmp(string1, string2, 3);        --- compares n char ignoring case
    */
    
    strlwr(string1);
    printf("%s", string1);

    return 0;
}