#include<stdio.h>

int main()
{
    float length , breadth , radius ,
    area_r,
    perimeter_r  ,
    area_c  ,
    circumference_c ; 


    printf(" input the length of rectangle\n");
    scanf("%f" , &length );

    printf(" input the breadth of rectangle\n");
    scanf("%f" , &breadth );

    printf(" input the radiusof circle\n");
    scanf("%f" , &radius );

    printf(" the area of rectangle is =%f\n" ,  area_r = length * breadth );
    
    printf(" the perimeter of the rectangle is =%f\n" ,perimeter_r  = 2*(length + breadth) );

    printf(" the area of the circle is =%f\n" ,area_c = 3.14 * (radius * radius) );

    printf(" the circumference of the circle is =%f\n" , circumference_c = 2*3.14*radius );

    return 0;

}