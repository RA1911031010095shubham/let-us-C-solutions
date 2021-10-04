#include<stdio.h>

int main()
{
    int hour ;

    for ( hour = 1; hour<=24; hour++)
    {
        if (hour<12 )
        {
            printf("%d:00 AM\n" , hour);
        }
        else if (hour>12 && hour<24)
        {
            printf("%d:00 PM\n" , hour);
        }
        else if (hour==12)
        {
            printf("%d:00 noon\n" , hour);
        }
        else if (hour==24)
        {
            printf("%d:00 midnight\n" , hour);
        }
    }

    return 0;
    
}