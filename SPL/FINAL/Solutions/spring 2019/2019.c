#include <stdio.h>

int main(){
    int num, sum, rem;
    num = 3459;
    sum = 0;

    while(num > 0){
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
        if((num == 0) && (sum >= 10)){
            printf("%d %d %d\n", rem, sum, num);
            num = sum;        }
    }
    printf("Final sum is %d\n", sum);
    return 0;
}
