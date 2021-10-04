#include<stdio.h>

int main()
{
    int num , num1 , num2 , num3 , num4 , num5 ;

    printf("type the number you wish to be reversed\n");
    scanf("%d" , &num );

    num1 = num%10;
    num2 = (num/10)%10;
    num3 = ((num/10)/10)%10;
    num4 = (((num/10)/10)/10)%10;
    num5 = ((((num/10)/10)/10)/10)%10;

    printf("reverse of this number is %d%d%d%d%d" , num1 , num2 , num3 , num4 , num5 );

    return 0;
}