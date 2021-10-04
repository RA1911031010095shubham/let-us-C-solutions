#include<stdio.h>
#include<math.h>

int main()
{
    int x1 , x2 , y1 , y2 , limit , count , sum1 , sum2 , limit1 , limit2 , limit3  ;
    
    printf("please enter the limit\n");
    scanf("%d" , &count);

    for ( limit = 0; limit<=count; limit++ )
    {
       x1 = limit;
       for (limit1 = 0; limit1<=count; limit1++ )
       {
           y1 = limit1;
           sum1 = pow(x1,3.0) + pow(y1,3.0);

           for ( limit2 = 0; limit2<=count; limit2++ )
           {
               x2 = limit2;
               for ( limit3 = 0; limit3<=count; limit3++ )
               {
                  y2 = limit3;
                  sum2 = pow(x2,3.0) + pow(y2,3.0);

                  if (sum1==sum2 && x1!=x2 && x1!=y2 && y1!=x2 && y1!=y2  )
                  {
                      printf("%d is a ramanujan number for (%d,%d) and (%d,%d)\n" , sum1 , x1 , y1 , x2 , y2);
                  }
                  
               }
               
           }
           
       }
       
    }

    return 0;
    
}