#include <stdio.h>
int main(){
    int n, r, result, temp;
    scanf("%d %d", &n, &r);

    int nFact = 1, nRFact = 1;
    for(int i = 1; i <= n; i++){
        nFact = nFact * i;
    }
    temp = n - r;
    for(int i = 1; i <= temp; i++){
        nRFact = nRFact * i;
    }
    result = nFact / nRFact;
    printf("%d ", result);
    return 0;
}

//nPr = n! / (n - r)!
