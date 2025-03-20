#include <stdio.h>
int main(){
    FILE *fp1;
    fp1 = fopen("hi.txt", "w");

    char name[6] = {'R', 'A', 'H', 'I', 'M', '\0'};
    for(int i = 0; i <= 4; i++){
        putc(name[i], fp1);
        putc('\n', fp1);
    }
    fclose(fp1);
    return 0;
}
