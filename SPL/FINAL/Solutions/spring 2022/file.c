#include <stdio.h>
#include <math.h>
int main(){
    FILE *f = fopen("numbers.txt", "r");

    int num[100];
    char ch[100];
    int k = 0, j = 0;
    while(fgets(ch, sizeof(ch), f) != NULL){
        num[k++] = atoi(ch);
    }
    printf("Middle number is: %d", (ceil((float)k / 2)));
}
