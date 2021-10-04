#include<stdio.h>

int main()
{
    int year , d , c , f , z , day ;

    printf(" input the year\n");
    scanf("%d" , &year );

    d = (year % 100);
    c = (year - d)/100;
    f = 29 + d + ( d / 4 ) + ( c / 4 ) - 2 * c;
    
    
    if (f < 0 )
    {
        z = -(((f/7)-1)*7) ;
        day = z + f ; 
        
    }
    else

    day = f%7 ;

  if (day == 2)
    {
        printf("the day on this date is monday");
    }
    else if (day == 3)
    {
        printf("the day on this date is tuesday");
    }
    else if (day == 4)
    {
        printf("the day on this date is wednesday");
    }
    else if (day == 5)
    {
        printf("the day on this date is thursday");
    }
    else if (day == 6)
    {
        printf("the day on this date is friday");
    }
    else if (day == 7)
    {
        printf("the day on this date is saturday");
    }
    else if (day == 1)
    {
        printf("the day on this date is sunday");
    }
    else
    printf("you have entered wrong input");

    return 0;


}