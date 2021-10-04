#include<stdio.h>
#include<math.h>

int main()
{
    float x , y , r , m ;

    printf("please input the cartesian co-ordinates\n");
    scanf("%f %f", &x  , &y );

    r = sqrt ((pow(x , 2.0)) + (pow(y , 2.0)));
    m = atan (y/x);

    printf("the polar co-ordinates of these cartesian co-ordinates are (%f,%f)" , r , m );



    return 0;
}