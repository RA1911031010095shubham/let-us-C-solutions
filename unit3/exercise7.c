#include<stdio.h>

int main()
{
    int angle1 , angle2 , angle3 , sum ;

    printf("please input all the three angles of triangles\n");
    scanf("%d%d%d" , &angle1 , &angle2 , &angle3);

    sum = angle1 + angle2 +angle3 ;

    if ( sum == 180 )
    {
        printf("the triangle is valid\n");
    }
    else
    printf("the triangle is not valid\n");

    return 0;
}