#include <stdio.h>
int main() {
    int num, oriNum, rem, result = 0;
    scanf("%d", &num);
    oriNum = num;

    while (oriNum != 0) {
       // remainder contains the last digit
        rem = oriNum % 10;
        
       result += rem * rem * rem;
        
       // removing last digit from the orignal number
       oriNum /= 10;
    }

    if (result == num)
        printf("Armstrong number.", num);
    else
        printf("Not Armstrong number.", num);

    return 0;
}
