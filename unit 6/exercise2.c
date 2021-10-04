#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int limit ;
    float  num , numi  , sum, factorial ;

    limit = 1;
    num =1.0;
    
    sum=0.0;
    numi =1.0;
    while (limit<=7)
    {
        factorial =1.0;
        while (num>0)
        {
            factorial = factorial * num;
            num = num-1; 
        }
        
        sum = sum + (numi/factorial);

        
        limit=limit+1;
        num = limit;
        numi = num; 
     
    }
    printf("the sum of first seven terms of following series is %f\n" , sum);
    return 0;
}