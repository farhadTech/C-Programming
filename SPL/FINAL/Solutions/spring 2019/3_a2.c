#include <stdio.h>
int main(){
    FILE *fp1;
    fp1 = fopen("text.txt", "w");

    char name[100];
    scanf("%[^\n]s", name);

    fprintf(fp1, "%s", name);
    fclose(fp1);
    return 0;
}
