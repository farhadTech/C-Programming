#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int sum = 0, t = 10;
    for(int i = 1; i <= n; i++){
        sum = sum + t;
        t = t * 3;
    }
    printf("%d ", sum);
    return 0;
}
