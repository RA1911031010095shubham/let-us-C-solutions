#include<stdio.h>
#include<math.h>

int main()
{
    int a , b , c , num , result;

    num = 1;

    while (num<=500)
    {
        a = num%10;
        b = (num/10)%10;
        c = ((num/10)/10)%10;
        result = pow(a,3.0)+pow(b,3.0)+pow(c,3.0);

        if (num == result)
        {
            printf("the number %d is a armstrong number\n" , num);
        }

        num = num+1;
        
    }

    return 0;
    

}
