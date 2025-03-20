#include <stdio.h>

struct bowler{
    int wickets;
    int matches;
    long long runs;
    char name[100];
    char country[100];
    double average;
};

int main(){
    struct bowler b[100];

    for(int i = 0; i < 100; i++){
        scanf("%d", b[i].wickets);
        scanf("%d", b[i].matches);
        scanf("%ll", b[i].runs);
        scanf("%[^\n]s", b[i].name);
        scanf("%[^\n]s", b[i].country);
    }
    double average[100];
    int k = 0;
    for(int i = 0; i < 100; i++){
        double av = b[i].runs / b[i].wickets;
        average[k++] = av;
        av = 0;
    }

    int max = 0;
    for(int i = 0; i < k; i++){
        if(b[i].average > max){
            max = b[i].average;
        }
    }
}
