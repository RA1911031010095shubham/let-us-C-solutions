#include<stdio.h>

int main()
{
    int side1 , side2 , side3 ;

    printf(" please enter the sides\n ");
    scanf("%d%d%d", &side1 , &side2 , &side3 );

    if ( side1 >= side2 && side1 >= side3)
    {
        if ( side2 + side3 > side1)
        {
            printf("the triangle is valid\n");
        }
         else
        printf("the triangle is not valid\n");
        
    }
     if ( side2 >= side1 && side2 >= side3)
    {
        if ( side1 + side3 > side2)
        {
            printf("the triangle is valid\n");
        }
         else
        printf("the triangle is not valid\n");
        
    }
     if ( side3 >= side2 && side3 >= side1)
    {
        if ( side2 + side1 > side3)
        {
            printf("the triangle is valid\n");
        }
         else
         printf("the triangle is not valid\n");
        
    }
    

    return 0;
}