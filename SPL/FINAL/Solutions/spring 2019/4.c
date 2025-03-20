#include <stdio.h>
struct Student{
    char name[100];
    char id[100];
    float marks;
};
int main(){
    struct Student s[100];

    for(int i = 0; i < 100; i++){
        printf("Enter for the %d person: ", i + 1);
        puts("\nEnter name: ");
        scanf("%[^\n]s", s[i].name);
        getchar();
        puts("Enter ID:");
        scanf("%[^\n]s", s[i].id);
        getchar();
        puts("Enter marks: ");
        scanf("%f", &s[i].marks);
        getchar();
    }
    int mx = -1, mn = 1000, ind_mx, ind_mn;
    for(int i = 0; i < 100; i++){
        if(s[i].marks > mx){
            mx = s[i].marks;
            ind_mx = i;
        }
        if(s[i].marks < mn){\
            mn = s[i].marks;
            ind_min = i;
        }
    }
    printf("%s got highest %d marks. ", s[ind_mx].name, mx);
    printf("%s got lowest %d marks. ", s[ind_mn].name, mn);
    return 0;
}
