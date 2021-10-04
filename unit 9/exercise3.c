#include<stdio.h>
#include<math.h>
float fun(float , float);

int main()
{
    int count;
    float sum ,  x , num , sum1;

    printf("please enter the value of x\n");
    scanf("%f" , &x);

    x=sin(x);

    num=1.0;
    sum=0;

    for (count=1;count<=10;count++)
    {
        sum1=fun(x , num);
        sum=sum+sum1;
        num=num +4;
    }
    printf("the value of sin(%f)=%f\n" , x , sum);

    return 0;
}
float fun(float x , float num)
{
   float numi , num2 , numii , fact , factt , z , zz , sum1;

   numi=num;
   fact=num;
   num=num-1;
   while ( num>=1)
   {
       fact= fact*(num);
       num=num-1;
   }
   z=(pow(x,numi))/fact;

   num2=numi+2;
   numii=num2;
   factt=num2;
   num2=num2-1;
   while ( num2>=1)
   {
       factt= factt*(num2);
       num2=num2-1;
   }
   zz=(pow(x,numii))/factt;

   sum1= z -zz;
   return (sum1);
}