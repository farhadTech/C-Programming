#include <stdio.h>
int main(){
    FILE *f = fopen("numbers.txt", "r");

    char name[100];
    int arr[100];
    int j = 0;
    while(fgets(name, sizeof(name), f) != NULL){

        arr[j++] = atoi(name);
    }
    for(int i = 0; i < j; i++){
        printf("%d ", arr[i]);
    }
    printf("Median Value is: %d", j / 2);
    return 0;
}
