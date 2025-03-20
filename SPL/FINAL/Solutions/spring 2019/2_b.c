#include <stdio.h>
int add(int a, int b){
    int sum = a + b;
    return sum;
}
int sub(int a, int b){
    int s = a - b;
    return s;
}
int mult(int a, int b){
    int m = a * b;
    return m;
}
int div(int a, int b){
    int d = a / b;
    return d;
}
int main(){
    int a, b;
    char ch;
    scanf("%d %c %d", &a, &ch, &b);

    if(ch == '+'){
        int r = add(a, b);
        printf("%d ", r);
    }
    if(ch == '-'){
        int r = sub(a, b);
        printf("%d ", r);
    }
    if(ch == '*'){
        int r = mult(a, b);
        printf("%d ", r);
    }
    if(ch == '/'){
        int r = div(a, b);
        printf("%d ", r);
    }
    return 0;
}
