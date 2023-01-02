#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d", &n);
    bool isTrue = true;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isTrue = false;
            break;
        }
    }
    if(isTrue){
        printf("prime");
    }
    else{
        printf("Not prime.");
    }
    return 0;
}
