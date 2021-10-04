#include<stdio.h>
#include<math.h>

int main()
{

    int n , hundred , fifty , ten , five , two , one ;

    printf("enter the sum of rupees\n");
    scanf("%d" , &n);

    if (n>=100)
    {
       hundred = n / 100;
       n = n%100;
       printf("the number of hundreds=%d\n" , hundred);
    }
    if (n>=50)
    {
        fifty = n / 50;
        n = n%50;
        printf("the number of fifty=%d\n" , fifty);
    }
    if (n>=10)
    {
       ten = n / 10;
       n = n%10;
       printf("the number of ten=%d\n" , ten);
    }
    if (n>=5)
    {
        five = n / 5;
        n = n%5;
        printf("the number of five=%d\n" , five);
    }
    if (n>=2)
    {
        two = n / 2;
        n = n%2;
        printf("the number of two=%d\n" , two);
    }
    if (n>=1)
    {
        one = n / 1;
        printf("the number of one=%d\n" , one);
    }
    
       return 0;

}