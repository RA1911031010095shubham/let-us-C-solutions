#include<stdio.h>

int main()
{
    float m1 , m2 , m3 , m4 , m5 ;

    printf("input your 1st subject's marks here\n");
    scanf("%f" , &m1);

    printf("input your 2nd subject's marks here\n");
    scanf("%f" , &m2);

    printf("input your 3rd subject's marks here\n");
    scanf("%f" , &m3);

    printf("input your 4th subject's marks here\n");
    scanf("%f" , &m4);

    printf("input your 5th subject's marks here\n");
    scanf("%f" , &m5);

    printf("your aggregate marks are %f\n" , (m1+m2+m3+m4+m5)/5 );

    printf("your percentage is %f\n" , (m1+m2+m3+m4+m5)/5 );

    return 0;
}
