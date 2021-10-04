#include<stdio.h>
#include<math.h>

int main()
{
    int a , b , c;

    for ( a = 1; a<=30; a++)
    {
        for ( b = 1; b <=30; b++)
        {
            for ( c = 1; c <=30; c++)
            {
                if (pow(a,2.0) + pow(b,2.0) == pow(c,2.0) || pow(a,2.0) + pow(c,2.0) == pow(b,2.0) || pow(c,2.0) + pow(b,2.0) == pow(a,2.0))
                {
                    printf("(%d,%d,%d)\n" , a , b , c );
                }
                
            }
            
        }
        
    }
    return 0;
}