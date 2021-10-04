#include<stdio.h>

int factor();
int main()
{
    int num;

    printf("please enter the integer whose factors you want to find out\n");
    scanf("%d" , &num);

    printf("so the factors of %d are:", num);
    factor(num);

    return 0;
}
int factor(int num)
{
    int fact,numi;
    numi=num;
    num=num-1;
    while (num>0)
    {
        fact= numi%num;
        
        if (fact==0)
        {
         printf("%d,"  , num);
        }
        num=num-1;
    }
    
}