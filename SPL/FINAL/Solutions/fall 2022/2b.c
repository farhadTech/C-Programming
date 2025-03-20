#include <stdio.h>
void additems(int items[], int add[], int n){
    for(int i = 0; i < n; i++){
        items[i] = items[i] + add[i];
    }
}
void openDoor(char password[]){
    char str[100] = "Narnia";
    if(strcmp(password, str) == 0){
        printf("Door to Narnia is open.");
    }
    else{
        printf("There is no door.");
    }
}

int main(){
    puts("Enter size of the arrays: ");
    int n;
    scanf("%d", &n);
    int items[1000], add[1000];

    puts("Enter items: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &items[i]);
    }
    puts("Enter adds: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &add[i]);
    }
    additems(items, add, n);
    puts("Enter password: ");
    getchar();
    char pass[100];
    scanf("%[^\n]s", pass);
    openDoor(pass);
    return 0;
}









