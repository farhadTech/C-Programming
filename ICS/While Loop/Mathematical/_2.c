
// Using Euclidean Algorithm
#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int oa = a, ob = b;
    printf("Original a and b: %d %d\n", oa, ob);
    while(a % b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }
    int gcd = b;
    int lcm = (oa * ob) / gcd;
    printf("%d", lcm);

    return 0;
}