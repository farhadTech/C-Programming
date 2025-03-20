#include <stdio.h>
int main(){
    char str[1000];
    scanf("%[^\n]s", str);

    char s[1000];
    int k = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            s[k++] = str[i];
            while(str[i] == str[i + 1]){
                i++;
            }
           }
           else{
            s[k++] = str[i];
           }
    }
    s[k] = '\0';
    puts(s);
}
