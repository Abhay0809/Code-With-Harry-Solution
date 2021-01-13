#include <stdio.h>

int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

    //LEAP YR IF IT IS DIVISIBLE BY 400
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   
   //NOT A LEAP YR IF DIVISIBLE BY 100 BT NOT DIVISIBLE BY 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   
   //DIVISIBLE BY 100 AND 4 THEN LEAP YR
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }

   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}