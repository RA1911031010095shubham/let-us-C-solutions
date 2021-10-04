#include<stdio.h>

int main()
{
    int num , count , limit , ans ;

    printf("please enter the number whose multiplication table you want\n");
    scanf("%d" , &num);

    printf("till what number you want the multiplication table\n");
    scanf("%d" , &limit);

    count=1;

    while ( count<=limit )
    {
        ans = num * count;

        printf("%d * %d = %d\n" , num , count , ans);

        count=count+1;
    }
    return 0;


}