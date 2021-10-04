#include<stdio.h>
#include<math.h>

int main()
{
    
    int num , numi , remain, ans , octal , octal1  , count, fans , result ;

    printf("please enter the number\n");
    scanf("%d" , &num );

    numi = num;
    count = 0;
    octal1 = 0;

    while (remain>0)
    {
        remain = num/8;
        ans = num%8;
        octal = ans * pow(10.0,count);
        fans = octal + octal1;
        num = remain;
        count = count + 1;
        octal1 = fans + 0;


    }

    printf("the octal equivalent of %d is %d\n" , numi , octal1);

    return 0;
    
}