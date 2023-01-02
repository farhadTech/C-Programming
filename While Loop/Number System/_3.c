#include <stdio.h>  
int main(){  
    int num, binNum, decNum = 0, base = 1, rem;   
    scanf (" %d", &num); 
  
    binNum = num; 
      
    while (num > 0){  
        rem = num % 10;  
        decNum = decNum + rem * base;  
        num = num / 10; 
        base = base * 2;  
    }  
    printf ("%d ", decNum);   
    return 0; 
}  