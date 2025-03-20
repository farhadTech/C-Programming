#include <stdio.h>
int main(){
    char str1[50] = {'\0'}, str2[50] = "BEST";
    strcpy(str1, "HELLO FELLAS");
    puts(str1); // HELLO FELLAS
    int i = strlen(str1) * 0.5;
    printf("%d ", i); // i = 6
    for(int k = 0; str2[k] != '\0'; ++k){
        str1[i + k] = str2[k];
    }
    puts(str1); // HELLO BESTAS
    strrev(str1);
    puts(str1); // SATSEB OLLEH
    strcat(str1, str2);
    puts(str1); // SATSEB OLLEHBEST
    if(strcmp(str2, str1) > 0){
        strcpy(str1, "CSE IS EASY");
    }
    else{
        strcpy(str2, "UIU IS THE BEST");
        puts(str2);
        // UIU IS THE BEST
    }
    return 0;
}
