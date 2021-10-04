#include<stdio.h>

int main()
{
    float temperature ; 
    
    printf("please input the temperature\n");
    scanf("%f" , &temperature );

    printf("the temperature in celsius is %f\n" , (temperature - 32)*0.55555555555 );

    return 0;
}