#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int t = 0, sum = 0;

    for(int i = 1; i <= n; i++){
        t = t + 2;
        sum = sum + t;
    }
    printf("%d ", sum);
    return 0;
}
