#include <stdio.h>
int main(){
    char str1[100] = "Hello";
    char str2[100] = "Bonjour";

    int i, k;
    strncat(str1, "Maria", 2);
    puts(str1); // HelloMa
    strncpy(str2, "Federick", 3);
    puts(str2); // Fedjour
    i = strlen(str1);
    printf("%d\n", i); // 7
    for(k = 0; str2[k] != '\0'; k++){
        str1[i + k] = str2[k];
    }
    str1[i + k] = '\0';
    puts(str1); // HelloMaFedjour
    printf("\n");
    puts(str1);
    printf("\n");
    strrev(str1);
    puts(str1);

    return 0;
}
