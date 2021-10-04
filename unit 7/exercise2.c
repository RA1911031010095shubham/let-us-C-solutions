#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int subject , class;

    printf("please enter your class obtained and also enter the number of subjects you have failed in\n");
    scanf("%d%d" , &class , &subject);

    switch (class)
    {
    case 1:
        if (subject>3)
        {
           printf("you don't get any grace marks\n");
        }
        else
        printf("you get grace of 5 marks per subject\n");  
        break;
    case 2:
        if (subject>2)
        {
           printf("you don't get any grace marks\n");
        }
        else
        printf("you get grace of 4 marks per subject\n");  
        break;
    case 3:
        if (subject>1)
        {
           printf("you don't get any grace marks\n");
        }
        else
        printf("you get grace of 5 marks per subject\n");
        break;
    }

    return 0;

}