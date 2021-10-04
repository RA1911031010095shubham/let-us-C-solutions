#include<stdio.h>

int main()
{
    int length , breadth , parameter , area ;

    printf("please enter the length , and breadth\n");
    scanf("%d%d" ,  &length , &breadth );

    parameter = 2 * ( length + breadth );
    area = length * breadth;

    if ( parameter > area )
    {
      printf("parameter of rectangle is greater than area");
    }
    else
    printf("area of rectangle is greater than parameter");

    return 0;
}