#include<stdio.h>

int main()
{
    int number , sum1 , sum2 , sum3 , sum4 , sum5 , sumf ;

    
    printf("input the 5 digit number whose sum you want =\n");
    scanf("%d" , &number );
 
    sum1= number%10;
    sum2= (number/10)%10;
    sum3= ((number/10)/10)%10;
    sum4= (((number/10)/10)/10)%10;
    sum5= ((((number/10)/10)/10)/10)%10;

    printf("the sum of all the digits in this number is =%d\n" , sumf = sum5 + sum4 +sum3 + sum2 + sum1 );

    
    return 0;

}