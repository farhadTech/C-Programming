#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int sum = 0, t = 1, u = 2;
    for(int i = 1; i <= n; i++){
        sum = sum + (u * t);
        t = t + 1;
        u = u + 1;
    }
    printf("%d ", sum);
    return 0;
}
