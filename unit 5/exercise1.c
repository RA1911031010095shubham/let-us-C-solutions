#include<stdio.h>

int main()
{
    int employee , overtime ,  hours ;

    employee = 1;

    while (employee<=10)
    {
        printf("please enter how much overtime employee number %d have worked\n" , employee);
        scanf("%d" , &hours );

        overtime = 12 * hours;

        printf("the overtime payment of employee number %d is %d\n" , employee , overtime);

        employee = employee + 1; 
      
    }
    
    return 0;
}