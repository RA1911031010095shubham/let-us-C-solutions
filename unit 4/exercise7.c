#include<stdio.h>
#include<math.h>

int main()
{
    int w ;
    float h , bmi ;

    printf("please input the weight and height\n");
    scanf("%d%f" , &w , &h );

    bmi = w/pow(h,2.0);

    if ( bmi<15)
    {
       printf("starvation\n");
    }
    else if ( bmi>=15.1 && bmi<=17.5 )
    {
       printf("anorexic\n");
    }
     else if ( bmi>=17.6 && bmi<=18.5 )
    {
       printf("underweight\n");
    }
     else if ( bmi>=18.6 && bmi<=24.9 )
    {
       printf("ideal\n");
    }
     else if ( bmi>=25 && bmi<=25.9 )
    {
       printf("overweight\n");
    }
     else if ( bmi>=30 && bmi<=30.9 )
    {
       printf("obese\n");
    }
     else if ( bmi>=40 )
    {
       printf("morbidly obese\n");
    }
    
    

}