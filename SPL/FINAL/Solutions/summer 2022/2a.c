#include <stdio.h>
int func(int n){
    printf("%d\n", n);
    if(n % 7 == 0) return 2;
    else if(n % 2 == 0) func(n + 2);
    else func(n + 1);
    printf("%d\n", n);

}
int main(){
    printf("%d", func(3));
}
