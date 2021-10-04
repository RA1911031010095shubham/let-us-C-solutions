#include<stdio.h>
#include<math.h>

int main()
{
    float l1 , l2 , g1 , g2 , d ;

    printf("please input the latitude values over here\n");
    scanf("%f %f" , &l1 , &l2 );

    printf("please input the longitude values over here\n");
    scanf("%f %f" , &g1 , &g2 );

    d = 3963 * acos ( sin ( l1 ) * sin ( l2 ) + cos ( l1 ) * cos ( l2 ) * cos ( g2 - g1 ));

    printf(" the distance between these two points in nautical miles is %f\n" , d );

    return 0;

}