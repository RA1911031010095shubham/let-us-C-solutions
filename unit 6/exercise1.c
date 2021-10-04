#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int limit , num , numi , factor ;
     
     limit=3;
     printf("2\n");
    
     while (limit<300)
     {
        
        numi=limit;
        num=limit-1;
        while (num>1)
        {
            factor= numi%num;
            num=num-1;
            if (factor==0)
            {
                break;
            }
            else if (num==1)
            {
               printf("%d\n" , numi);
            }
            
        }
        limit=limit+1;
        
     }
     return 0;
     
}