#include<stdio.h>
#include<math.h>

int main()
{
    float l , b , h , area1 , area2 , area3 ;

    printf("please input the lenght , breadth , and height of the triangle\n");
    scanf("%f %f %f" , &l , &b , &h );

    area1 = (l + b + h )/2;
    area2 = area1*(area1-l)*(area1-b)*(area1-h);
    area3 = sqrt(area2);

    printf("so the area of given triangle is = %f\n" , area3);

    return 0; 

}
