#include <stdio.h>
void change(int *x);
int main(){
    int a = 10;
    printf("%d\n", a);
    change(&a);
    printf("%d\n", a);
    return 0;
}
void change(int *x){
    *x = *x * 11;
    ++*x;
    return;
}
