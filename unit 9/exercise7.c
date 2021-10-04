#include<stdio.h>
int fun();

int main()
{

    int j ,k , num;
    printf("please enter the value of numbers whose greatest common divisor you want to find out\n");
    scanf("%d%d" , &j ,&k);

    num = fun(j , k);

    printf("so the answer is%d\n" , num);

    return 0;
}
int fun( int j , int k)
{
    int num , mi;
    

    while (k>0)
    {
        num=j/k;
        mi=k;
        k=j-(num*k);
        j=mi;
    }
   
   return (mi);
    
}