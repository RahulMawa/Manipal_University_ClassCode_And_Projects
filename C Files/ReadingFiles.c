#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Reading Files
    //Path: /Users/rahulmawa/Documents/GitHub/PSUC_MIT_Sem1_CourseMaterial/C Files/sample2.txt

    FILE *pFile = fopen("/Users/rahulmawa/Documents/GitHub/PSUC_MIT_Sem1_CourseMaterial/C Files/sample2.txt", "r");
    char buffer[255];

    if(pFile == NULL)
    {
        printf("Unable to open file, pls retry");
    }
    else
    {
        while(fgets(buffer, 255, pFile) != NULL)
        {
        printf("%s", buffer);
        }
    }

    fclose(pFile);
}
