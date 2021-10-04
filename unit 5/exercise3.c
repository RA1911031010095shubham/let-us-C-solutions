#include<stdio.h>
#include<math.h>

int main()
{
    int num1 , num2 , result ;

    printf("please enter the value of both the numbers\n");
    scanf("%d%d" , &num1 , &num2 );

    result = pow(num1,num2);

    printf("the answer is %d\n" , result);

    return 0;


}