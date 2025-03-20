#include <stdio.h>
int main(){
    char str1[100], str2[100], str3[100];
    gets(str1);
    puts(str1); // Hello World
    scanf("%s", str2);
    puts(str2); // Programming
    strncpy(str3, str1, 8);
    puts(str3); //Hello Wo
    strncat(str2, str3, 4);
    puts(str2); //ProgrammingHell
    strcpy(str3, str2);
    puts(str3); //ProgrammingHell
    strncat(str3, str1, 3);
    puts(str3); //ProgrammingHellHel
    if(strcmp(str2, str3) > 0){
        strncpy(str1, str3, 2);
        puts(str1);
    }
    else{
        strncpy(str2, str3, 2);
        puts(str2); //ProgrammingHell//
    }

    return 0;
}
