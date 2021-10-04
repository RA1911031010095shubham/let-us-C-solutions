#include<stdio.h>

int main()
{
    int x1 ,x2 ,x3 ,y1 ,y2 ,y3 ;

    printf(" please enter the x co-ordinates\n");
    scanf("%d%d%d" , &x1 , &x2 , &x3 );

    printf(" please  enter the y co-ordinates\n");
    scanf("%d%d%d" , &y1 , &y2 , &y3 );

    if ( x1==x2 && x2==x3 && x1==x3 || y1==y2 && y2==y3 && y1==y3 )
    {
       printf("the points fall on the same straight line\n");
    }
    else
    printf("the points do not fall on the same straight line\n");

    return 0;   
}