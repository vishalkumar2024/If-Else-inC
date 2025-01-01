#include <stdio.h>
int main()
{
   // Taking input first  number
   int a;
   printf("Enter the value of a:");
   scanf("%d", &a);
   
   // Taking input first  number
   int b;
   printf("Enter the value of b:");
   scanf("%d", &b);

   // compare of three numbers//
   if (a > b)
   {
      printf("a is greater");
   }
   else if (b > a)
   {
      printf("b is greater");
   }
   else
   {
      printf("a and b are same number");
   }
   return 0;
}
