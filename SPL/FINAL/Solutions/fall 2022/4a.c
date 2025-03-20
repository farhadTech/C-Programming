#include <stdio.h>
struct Student{
    char name[100];
    char id[100];
    float marks[5];
}s;

int main(){
    s[50];
    for(int i = 0; i < 50; i++){
        scanf("%[^\n]s", s.name);
        getchar();
        scanf("%[%\n]s", s.id);
        for(int j = 0; j < 5; j++){
            scanf("%f", &s[i].marks[j]);
        }
        getchar();
    }
    int sum[50] = {0};
    for(int i = 0; i < 50; i++){
        int k = 0;
        for(int j = 0; j < 5; j++){
            sum[k] += s[i].marks[j];
            k++;
        }
        sum = 0;
    }
    int max = -1, ind, l = 0, high_ind[5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 50; j++){
            if(s[j].marks[i] > max){
                max = s[j].marks[i];
                ind = j;
            }
        }
        high_ind[l++] = ind;
    }
    int m = 0;
    puts("five students are: ");
    for(int i = 0; i < 5; i++){
        printf("%s\n", s[high_ind[m++].name);
    }
    return 0;
}
