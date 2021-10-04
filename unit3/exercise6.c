#include<stdio.h>

int main()
{
    int age1 , age2 , age3 ;

    printf("please input the age of ram , shyam and ajay\n");
    scanf("%d%d%d" , &age1 , &age2 , &age3 );

    if (age1<age2 && age1<age3)
    {
     printf("ram is the youngest of all three");
    }
    else if (age2<age3 && age2<age1)
    {
     printf("shyam is the youngest of all three");
    }
    else if (age3<age1 && age3<age2)
    {
     printf("ajay is the youngest of all three");
    }
    
    return 0;

}