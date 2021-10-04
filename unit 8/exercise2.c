#include<stdio.h>
#include<math.h>

int power();

int main()
{
    int a , b , c;

    printf("please enter the value of a and b\n");
    scanf("%d%d" , &a , &b);
    c = power(a , b);

    printf("so the value of (%d^%d) is %d\n" , a , b , c );
    return 0;
}

int power(int a , int b)
{
    int c;

    c= pow(a,b);

    return (c);
}
