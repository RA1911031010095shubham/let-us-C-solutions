#include<stdio.h>
#include<math.h>

int main()
{
    float angle , a , b , c , d , e , f ;

    printf(" please write the angle over here " );
    scanf("%f" , &angle );

    a = sin( angle );
    b = cos( angle );
    c = tan( angle );
    d = 1 / sin( angle );
    e = 1 / cos( angle );
    f = 1 / tan( angle );

    printf(" so the values of the trignometric ratios of this angle are\n sin= %f\n cos= %f\n tan= %f\n cosec= %f\n sec= %f\n cot= %f\n " , a , b , c , d , e , f );

    return 0;

}