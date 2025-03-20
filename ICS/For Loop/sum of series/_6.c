#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int sum = 0, t = 5;
    for(int i = 1; i <= n; i++){
        sum = sum + t;
        t = t * 2;
    }
    printf("%d ", sum);
    return 0;
}
