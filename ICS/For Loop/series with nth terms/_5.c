#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int t = 1;
    for(int i = 1; i <= n; i++){
        printf("%d ", t);
        t = t * 2;
    }
    return 0;
}
