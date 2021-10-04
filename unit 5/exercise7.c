#include<stdio.h>

int main()
{
    int limit , num , pnum , nnum , zero;

    printf("how many numbers you want to input\n");
    scanf("%d" , &limit);

    pnum = 0;
    nnum = 0;
    zero = 0;

    while (limit>=1)
    {
        printf("please enter the number\n");
        scanf("%d" , &num);

        if (num>0)
        {
            pnum = pnum + 1;
        }
        else if (num<0)
        {
            nnum = nnum + 1;
        }
        else if (num==0)
        {
            zero = zero + 1;
        }
        
        limit = limit - 1;
    }
    
    printf(" the number of\n positive numbers=%d\n negative number=%d\n zeroes=%d\n" , pnum , nnum , zero );

    return 0;
}