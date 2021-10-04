#include<stdio.h>
#include<math.h>

void fun();

int main()
{
    int a;
    float b , c;

    printf("please enter your marks in subject1 subject 2 subject 3\n");
    scanf("%d%f%f" , &a ,&b ,&c);

    fun(&a ,&b ,&c);

    printf("so the average of the marks is %f\n" , b);
    printf("so the percentage of the marks is %f\n" , c);

    return 0;
}
void fun( int *a , float*b , float*c)
{
    float average , percentage;

    average = (*a + *b + *c)/3;
    percentage = ((*a + *b + *c)/300)*100;
    *b=average;
    *c=percentage;
}