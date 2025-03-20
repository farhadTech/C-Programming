#include <stdio.h>

int main(){
    int num, sum = 0;
    for(int i = 1; i <= 3; i++){
        scanf("%d", &num);
        int count = 0;
        while(num != 0){
            int rem = num % 10;
            sum = sum + (rem * pow(2, count));
            printf("%d ", sum);
            num = num / 10;
            count++;
        }
        printf("%d ", sum);
    }
}

