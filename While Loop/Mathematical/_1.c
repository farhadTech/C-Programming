// Using Euclidean Algorithm
#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int oa = a, ob = b;
    while(a % b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }
    int gcd = b;
    printf("%d", gcd);

    return 0;
}