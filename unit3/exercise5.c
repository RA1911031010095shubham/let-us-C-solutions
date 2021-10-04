#include<stdio.h>

int main()
{
    int number , num1 , num2 , num3 , num4 , num5 , revnum;

    printf("input the five digit number\n");
    scanf("%d" , &number);

    num1 = (number%10)*10000 ;
    num2 = ((number/10)%10)*1000 ; 
    num3 = (((number/10)/10)%10)*100 ;
    num4 = ((((number/10)/10)/10)%10)*10 ;
    num5 = (((((number/10)/10)/10)/10)%10) ;
    revnum = num1 + num2 + num3 + num4 + num5 ;

    if (number == revnum)
    {
        printf("the reverse of the number %d is same to its reverse number %d\n" , number , revnum);
    }
    else
    printf("the numbers are not identical\n");

    return 0;

}