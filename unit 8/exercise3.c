#include<stdio.h>

int roman();
int main()
{
    int year ;
    char r;

    printf("please enter the year\n");
    scanf("%d" , &year);
    printf("so the roman equivalent of %d is = " , year );
    roman(year);
     return 0;
}

int roman(int year)
{

    while (year>=1000)
    {
       year = year - 1000;
       printf("M");
    }
    while (year>=500)
    {
        year = year - 500;
        printf("D");
    }
    while (year>=100)
    {
        year = year - 100;
        printf("C");
    }
    while (year>=50)
    {
        year = year - 50;
        printf("L");
    }
    while (year>=10)
    {
        year = year - 10;
        printf("X");
    }
     while (year>=5)
    {
        year = year - 5;
        printf("V");
    }
     while (year>=1)
    {
        year = year - 1;
        printf("I");
    }
    
}