#include<stdio.h>
#include<math.h>

int main()
{

    int x , y , radius , point ;

    printf("please enter the co-ordinates x and y and also the radius of the circle\n");
    scanf("%d%d%d" , &x , &y , &radius );

    point = sqrt( (pow( x , 2.0 )) + (pow( y , 2.0 )) );

    if (point > radius)
    {
        printf("the point will lie outside of the cirle\n");
    }
    else if (point = radius)
    {
        printf("the point will lie on of the cirle\n");
    }
    else if (point < radius)
    {
        printf("the point will lie inside of the cirle\n");
    }
    
    return 0;
    
}