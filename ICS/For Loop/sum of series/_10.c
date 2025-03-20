#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int sum = 0, t = 2, u = 5;
    for(int i = 1; i <= n; i++){
        sum = sum + (u * t);
        t = t * 2;
        u = u + 3;
    }
    printf("%d ", sum);
    return 0;
}
