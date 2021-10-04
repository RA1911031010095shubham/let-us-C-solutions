#include<stdio.h>

int main()
{
    int number , factorial , number2 ;

    printf("please enter the number\n");
    scanf("%d" , &number);
    
    number2 = number;
    factorial = 1;

    while (number>=1)
    {
       factorial = factorial * number;
       
       number= number-1;
    }

    printf("the factorial of %d is %d", number2 , factorial);

    return 0;
    
}