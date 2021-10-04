#include<stdio.h>

int main()
{
    float i , x ;
    int y ;

    for ( y = 1; y < 7; y++)
    {
     for ( x = 5.5; x<13.0; x=x+0.5)
     {
        i= 2+ (y+0.5*x);

        printf("y=%d  x=%f  i=%f\n" , y , x , i);
     }
     
    }

    return 0;
    
}