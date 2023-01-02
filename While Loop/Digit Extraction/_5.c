#include <stdio.h>
#include <math.h>
int main()
{
   int Num, FDigit, count, lDigit, x, y, sNum;
 
   scanf("%d", & Num);
   count = log10(Num); 

   //Finding the first digit
   FDigit = Num / pow(10, count);

   //Finding the last digit
   lDigit = Num % 10;

   //Swapping the first digit and last digit.
   x = FDigit * (pow(10, count));
   y = Num % x;
   Num = y / 10;
   
   //Storing the result
   sNum = lDigit * (pow(10, count)) + (Num * 10 + FDigit); 
   printf("%d", sNum);
 
   return 0;
}