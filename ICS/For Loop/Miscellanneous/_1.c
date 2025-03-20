#include <stdio.h>
#include <stdint.h>
int main(){
    int n;
    scanf("%d", &n);

    uint64_t fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    printf("%d ", fact);
    return 0;
}
