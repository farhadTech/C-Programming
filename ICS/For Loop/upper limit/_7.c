#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int t = 10;
    for(int i = 1; i <= n; i++){
        if(t <= n){
            printf("%d ", t);
            t = t * 3;
        }

    }
    return 0;
}
