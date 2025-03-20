#include <stdio.h>
int main(){
    int n; 
    scanf("%d", &n);
    int t = 1, sum = 0;
    for(int i = 1; i <= n; i++){
        if(n % 2 != 0){
            sum = sum + t;
        }
        t = t + 2;
    }
    printf("%d ", sum);
    return 0;
}
