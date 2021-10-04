#include<stdio.h>

int main()
{
    int population , rate , year ;

    population=100000;

    for ( year = 1; year<=10; year++)
    {
        rate=10;
        population = population -  population/10;
  
        printf("so the population at the end of %d year = %d\n" , year , population);
    }
    return 0;
    
}