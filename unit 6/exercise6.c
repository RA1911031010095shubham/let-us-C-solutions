#include<stdio.h>
#include<math.h>

int main()
{
    float a;
    int p , r , n , q;

    for ( q = 1; q<=10; q++)
    {
        for ( r = 1; r <=10; r++)
        {
            for ( n = 1; n <=10; n++)
            {
                for ( p = 1; p <=10; p++)
                {
                   a = p * pow((1+r/q) , n*q);

                   printf("p=%d , r=%d , n=%d , q=%d , a=%f\n" , p , r , n , q , a );
                    
                }
                
            }
            
        }
        
    }

    return 0;
    
}