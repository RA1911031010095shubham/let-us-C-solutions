#include<stdio.h>
#include<math.h>

int main()
{
    float c , d , ans ;

    printf ("please input the numbers\n");
    scanf("%f %f" , &c , &d );

    ans = c + d;
    c = ans - c;
    d = ans - d;

    printf(" so the numbers have been change and now the numbers are\n c=%f\n d=%f\n" , c , d );

    return 0;
}
