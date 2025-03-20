#include <stdio.h>

int main(){
    FILE *f = fopen("sample.txt", "r");

    char doc[100];
    int num[100];
    int k = 0;
    while(fgets(doc, sizeof(doc), f) != NULL){
        num[k++] = atoi(doc);
    }
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += num[i];
    }
    printf("Average is: %d", sum / k);
    return 0;
}
