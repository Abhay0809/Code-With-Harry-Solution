#include<stdio.h>
 
int main() {
   char ch;
 
   printf("\nEnter The Character : ");
   scanf("%c", &ch);
 
   if (ch >= 'a' && ch <= 'z')
      printf("Character is Lower Case Letters");
   else
      printf("Character is Not Lower Case Letters");
 
   return (0);
}
/*
#include<stdio.h>
 
int main() {
   char ch;
 
   printf("\nEnter The Character : ");
   scanf("%c", &ch);
 
   if (ch >= 97 && ch <= 122)
      printf("Character is Lower Case Letters");
   else
      printf("Character is Not Lower Case Letters");
 
   return (0);
}
*/
