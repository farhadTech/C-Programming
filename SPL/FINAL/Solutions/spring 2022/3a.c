#include <stdio.h>

int countDigit(int n){
    int count = 0;
    while(n){
        int rem = n % 10;
        count++;
        n /= 10;
    }
    return count;
}
int main(){
    int num;
    scanf("%d", &num);

    int res = countDigit(num);

    printf("%d ", res);
}
