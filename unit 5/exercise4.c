#include<stdio.h>

int main()
{
    int value;

    value = 0;

    while (value<=255)
    {
        printf("the equivalent character of ASCII value %d is %c\n" , value , value);

        value = value + 1;
    }

    return 0;
    

}