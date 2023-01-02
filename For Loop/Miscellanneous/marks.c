#include <stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);
    switch (marks / 10)
    {
    case 10:
        puts("A+");
        break;
    case 9:
        puts("A");
        break;
    case 8:
        puts("B+");
        break;
    case 7:
        puts("B");
        break;
    case 6:
        puts("C");
        break;
    default:
        puts("F");
    } 
    printf("%d \n", marks);
    return 0;
}