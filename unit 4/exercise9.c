#include<stdio.h>

int main()
{
    int year , x ;

    printf(" please enter the year\n ");
    scanf("%d" , &year );

    x = ( year % 4 == 0? printf("leap year") : printf("not leap year"));

    return 0;


}