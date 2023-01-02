#include <stdio.h>

int main(){
    int octNum;
    scanf("%d", &octNum);
    int decN = 0;
    int base = 1;
    int temp = octNum;

    while(temp){
        int lDigit = temp % 10;
        temp = temp / 10;
        decN = decN + lDigit * base;
        base = base * 8;
    }
    printf("%d", decN);
    return 0;
}
