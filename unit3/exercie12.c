#include<stdio.h>

int main()
{
    int x , y ;

    printf("please enter the x co-ordinate and y co-ordinate\n");
    scanf("%d%d" , &x , &y );

    if (x==0)
    {
        printf("the point (%d , %d) lies on x-axis", x , y);
    }
    else if (y==0)
    {
         printf("the point (%d , %d) lies on y-axis", x , y);
    }
    else if (x==0 && y==0)
    {
        printf("the point (%d , %d) lies on origin" , x , y);
    }
    else
    printf("the point does not lie on any axis");

    return 0;
}