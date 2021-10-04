#include<stdio.h>

int main()
{
    int x , y , z , m ;

    printf("please enter the numbers x , y , z\n");
    scanf("%d%d%d" , &x , &y , &z );

    m = ((x>y)&&(x>z)?printf("x is greatest\n"):(y>x)&&(y>z)?printf("y is greatest\n"):printf("z is greatest\n"));

    return 0;

}