#include<stdio.h>

int main()
{
    float sal , r ;

    printf("enter the salary\n");
    scanf("%f" , &sal );

    r = (sal>=25000 && sal<=40000?printf("manager\n"):sal>=15000 && sal<25000?printf("accountant\n"):printf("clerk\n"));

    return 0;



}