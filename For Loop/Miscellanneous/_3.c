#include <stdio.h>
#include <stdint.h>
int main(){
    int a, b, result = 1;
    scanf("%d %d", &a, &b);

    for(int i = 1; i <= b; i++){
        result = result * a;
    }
    printf("%d ", result);
    return 0;
}
