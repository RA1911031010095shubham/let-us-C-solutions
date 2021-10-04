#include<stdio.h>

int main()
{
    int num , pnum , hnum , lnum , limit , range ;

    printf("how many numbers you want to input\n");
    scanf("%d" , &limit); 
    
    while ( limit>=1)
    {
       
        printf("please enter the number\n");
        scanf("%d" , &num );

        if (num<pnum)
        {
            lnum = num;
        }
        else if (num>pnum)
        {
            hnum = num;
        }

        pnum = num;
        limit = limit -1;
    
    }

    printf("so the range of following numbers is %d" , range = (hnum - lnum) );

    return 0;
    
}