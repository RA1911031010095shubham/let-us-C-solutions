#include<stdio.h>

int factorial();
int main ()
{
   int a , b;

   printf("please enter the number you want to find factorial of\n");
   scanf("%d" , &a);
   b= factorial(a);

   printf("%d is the factorial of %d\n" , b , a );

   return 0;
}
int factorial(int a  )
{
   int b , limit ;

   limit = a;
   b = 1;

   while (limit>=1)
   {
      b=b*a;
      a=a-1;

      limit=a-1;

   }

   return (b);
}