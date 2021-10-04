#include<stdio.h>

int main()
{
 int distance;

 printf(" input the distance\n ");
 scanf("%d" , &distance );

 printf(" the distance in meter will be %d\n " , distance*1000 );

 printf(" the distance in inches will be %f\n " , distance*39370.1 );

 printf(" the distance in centimeters will be %d\n " , distance*100000 );

 return 0;
}

