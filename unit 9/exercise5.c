#include<stdio.h>
#include<math.h>
float func();

int main()
{
    float area;
    int a , b , c;

    printf("please enter the sides a, b ,c\n");
    scanf("%d%d%d" , &a , &b , &c);

    area=func(a , b , c);

    printf("so the area of triangle is=%f\n" , area);
    return 0;
}

float func(int a , int b , int c)
{
    float s , area;

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    return (area);

}