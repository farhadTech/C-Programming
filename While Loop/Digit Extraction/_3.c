#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int oN = n, rev = 0;
    while(n != 0){
        int lastD = n % 10;
        rev = rev * 10 + lastD;
        n = n / 10;
    }
    if(rev == oN){
        printf("Palindrome.");
    }
    else{
        printf("Not Palindrome.");
    }
    return 0;
}
