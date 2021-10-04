#include<stdio.h>
#include<math.h>

int main()
{
    float x ,sum , limit;

    printf("please enter the value of x\n");
    scanf("%f" , &x);
    
    limit=2.0;
    sum=(x-1)/x;

    while (limit<=7.0)
    {
        sum = sum  + (1.0/2 * pow(sum,limit));

        limit=limit+1.0;
        printf("%f\n" , sum);
    }
    

    return 0;
}