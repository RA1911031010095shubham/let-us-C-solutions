#include<stdio.h>

int main()
{
    int cp , sp , profit , loss ;

    printf(" please input the cost prize over here\n");
    scanf("%d" , &cp );
    
    printf(" please input the selling prize over here\n");
    scanf("%d" , &sp );

    if (cp>sp)
    {
        loss = cp - sp;

        printf("you have suffered a loss of %d\n" , loss );
    }
    else
    {
        profit = sp - cp;

        printf("you have made a profit of %d\n" , profit );
    }

    return 0;
}