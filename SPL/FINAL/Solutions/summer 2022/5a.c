#include <stdio.h>
void f1(int *arr, int n){
    for(int i = 0; i < n; i++){
        if(*(arr + i) % 2 != 0){
            printf("%d ", *(arr + i) + i * 2);
        }
    }
}
int main(){
    int arr[] = {2, 3, 6, 7, 11, 8};
    f1(arr, 8);

    return 0;
}
