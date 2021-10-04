#include<stdio.h>
#include<math.h>
void fnctn();

int main()
{
    int a , d , e;
    float b , c;

    printf("please enter the values of 5 integers\n");
    scanf("%d%f%f%d%d" , &a , &b , &c , &d , &e );

    fnctn( &a , &b , &c , &d , &e );

    printf("the sum of these numbers is %d\n" , a);
    printf("the average of these numbers is %f\n" , b);
    printf("the standard deviation of these numbers is %f\n" , c);
    
    return 0;
}
void fnctn(int*a , float*b , float*c , int*d , int*e)
{
    int sum ;
    float average , sd;
   sum = *a + *b + *c + *d + *e;
   average = sum/5;
   sd = sqrt(( pow(*a-average,2.0) + pow(*b-average,2.0) + pow(*c-average,2.0) + pow(*d-average,2.0) + pow(*e-average,2.0) )/5);
   *a=sum;
   *b=average;
   *c=sd;
   

}