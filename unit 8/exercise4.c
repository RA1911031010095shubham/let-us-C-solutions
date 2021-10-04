#include<stdio.h>

int leap();
int main()
{
    int year ;

    printf("please enter the year\n");
    scanf("%d" , &year);

    leap(year);

    return 0;
}
int leap(int year)
{
    if (year%4==0)
    {
        printf("the year %d is a leap year" , year);
    }
    else
    printf("the year %d is not a leap year" , year);
}