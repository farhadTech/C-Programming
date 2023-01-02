#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int flag = 1;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            flag = 0;
        }
    }
    if(flag){
        puts("Prime.");
    }
    else{
        puts("Not Prime.");
    }
    return 0;
}
