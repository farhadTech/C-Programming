#include <stdio.h>
int digitMult(int id){
    int mult = 1;
    while(id){
        int r = id % 10;
        mult *= r;
        id /= 10;
    }
    return mult;
}
int main(){
    int id = 91;
    int res = digitMult(id);
    printf("%d ", res);

    return 0;
}
