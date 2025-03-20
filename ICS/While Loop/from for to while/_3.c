
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int i = 1, t = 1, u = 3, sum = 0;
    while(i <= n){
        sum = sum + (u * t);
        t = t * 2;
        u = u + 3;
        i++;
    }
    printf("%d ", sum);
    return 0;
}
