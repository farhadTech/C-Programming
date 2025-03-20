#include <stdio.h>
int main(){
    int *a, *b, temp;
    a = (int*) malloc(sizeof(int));
    b = (int*) malloc(sizeof(int));

    scanf("%d %d", a, b);
    printf("%d %d\n", *a, *b);
    temp = *a;
    *a = *b;
    *b = temp;
    printf("%d %d\n", *a, *b);
    free(a);
    free(b);
    return 0;
}
