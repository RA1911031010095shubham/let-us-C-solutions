#include<stdio.h>

int main()
{
    int num ;

    printf("please input the number over here\n");
    scanf("%d" , &num);

    if (num<0)
    {
     printf("the absolute value of |%d| = %d" , num , -(num) );
    }
    else
    printf("the absolute value of |%d| = %d" , num , num );

    return 0;

}