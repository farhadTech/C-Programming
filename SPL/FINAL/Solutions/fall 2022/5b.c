#include <stdio.h>
int main(){
    FILE *f = fopen("sample.txt", "r");

    char arr[100];
    int num[100];
    int j = 0;
    while(fgets(arr, sizeof(arr), f) != NULL){
        printf("%s", arr);
        num[j++] = atoi(arr);
    }
    int out[100]; int k = 0;
    for(int i = 0; i < j; i++){
        if(num[i] % 2 == 0){
            out[k++] = num[i];
        }
    }
    FILE *f2 = fopen("output.txt", "w");

    for(int i = 0; i < k; i++){
        fprintf(f2, "\n%d ", out[i]);
    }
    return 0;
}
