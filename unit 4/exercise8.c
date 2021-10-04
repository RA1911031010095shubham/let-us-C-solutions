#include<stdio.h>

int main ()
{
    char x ;

    printf("please enter the character\n");
    scanf("%c" , &x );

    if (x>=97 && x <=122)
    {
        printf("the character entered is a lowercase alphabet\n");
    }
    else if (x >= 0 && x <= 47 || x >= 58 && x <= 64 || x >= 91 && x <= 96 || x >= 123 && x <= 127 )
    {
        printf("the character entered is a special symbol\n");
    }
    else
    printf("the character is neither lowercase alphabet nor lowercase alphabet\n ");

    return 0;
}