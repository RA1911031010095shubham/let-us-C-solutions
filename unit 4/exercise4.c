#include<stdio.h>
#include<math.h>

int main ()
{

    int a , b , c ;

    printf("please input all the three sides\n");
    scanf("%d%d%d" , &a , &b , &c );

    if ( a==b && a==c && b==c )
    {
       printf("it is an equilateral triangle\n");
    }
    else if (a==b || a==c || b==c )
    {
       printf("it is an  isosceles\n ");
    }
    else if ( (a>b && a>c) || (b>a && b>c) || (c>a && c>b) )
    {
       if ( (pow(a,2.0) == pow(b,2.0) + pow(c,2.0)) || (pow(b,2.0) == pow(c,2.0) + pow(a,2.0)) || (pow(c,2.0) == pow(b,2.0) + pow(a,2.0)) )
       {
           printf("it is an right angled triangle\n");
       }
       else
    {
        printf("it is an scalene triangle");
    }
       
    }
    
    return 0;
}