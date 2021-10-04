#include<stdio.h>

int main()
{
    char x ;

    printf(" please enter the character\n ");
    scanf("%c" , &x );

    if (x >= 65 && x <= 90)
    {
       printf(" the character is a capital letter\n ");
    }
    else if (x >= 97 && x <= 122)
    {
        printf(" the character is a small letter\n ");
    }
    else if (x >= 48 && x <= 57)
    {
        printf(" the character is a number\n ");
    }
    else if (x >= 0 && x <= 47 || x >= 58 && x <= 64 || x >= 91 && x <= 96 || x >= 123 && x <= 127 )
    {
        printf(" the character is a special symbol\n ");
    }

    return 0;
}