#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    while(n != 0){
        int lastD = n % 10;
        sum = sum + lastD;
        n = n / 10;
    }
    printf("%d ", sum);
    return 0;
}
