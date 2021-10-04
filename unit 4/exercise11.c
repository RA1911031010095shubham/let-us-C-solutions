#include<stdio.h>
#include<math.h>

int main()
{
    int angle , m ;

    printf("please enter the angle\n");
    scanf("%d" , &angle );

    m=( pow(sin(angle),2.0) + pow(cos(angle),2.0) == 1 ? printf("yes") : printf("no"));

    return 0;


}