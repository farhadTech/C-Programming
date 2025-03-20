#include <stdio.h>
int main(){
    char str[100];
    char sub[100];

    scanf("%[^\n]s", str);
    getchar();
    scanf("%[^\n]s", sub);
    int len, ind;
    for(len = 0; sub[len] != '\0'; len++);

    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        int j;
        int k = i;
        for(int j = 0; sub[j] != '\0'; j++){
            if(str[k] == sub[j]){
                count++;
                k++;
            }
        }
        if(count == len){
            ind = i;
            break;
        }
        else{
            count = 0;
        }
    }
    puts("");
    if(count == len){
        printf("Substring matches.");
    }
    else{
        printf("Substring does not matches.");
    }
    return 0;
}
