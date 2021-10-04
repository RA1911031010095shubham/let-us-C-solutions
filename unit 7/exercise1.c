#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int count , menu , num , numi , factorial , factors , even ;

    for ( count = 1;count>=1; count++)
    {
       printf("what do you wanna find out:\n 1)factorial of a number\n 2) prime or not\n 3)odd or even\n 4)exit\n");
       scanf("%d" , &menu);
       switch (menu)
       {
       case 1:
           printf("what number's factorial you wanna find out\n");
           scanf("%d" , &num);
           factorial =1;
           numi=num;
           while (num>=1)
           {
               factorial = factorial * num;
               num = num-1;
           }
           printf("so the factorial of %d = %d\n" , numi , factorial);
           break;
       case 2:
           printf("which number you want to find out is prime or not\n");
           scanf("%d" , &num);
           numi=num;
           if (num==2 || num==3 || num==5 || num==7)
           {
               printf("%d is a prime number\n" , num);
           }
           else
           {
             num = num-1;
             while (num>1)
                {
                 factors=numi%num;

                 num=num-1;

                 if (factors==0)
                  {   
                   printf("%d is not a prime number\n" , numi);
                   break;
                  }
                 
                 else if (num==1)
                  {
                      printf("%d is a prime number\n" , numi);
                  }
                  
   
                  
                }
           }
           break;
        case 3:
            printf("which number you want to find out is veen or odd\n");
            scanf("%d" , &num);
            numi=num;
            even=num%2;

            if (even == 0)
            {
                printf("the number %d is a even number\n" , numi);
            }
            else
            {
                printf("the number %d is a odd number\n" , numi);
            }
            break;
        case 4:
        exit(1);
        
            
         }
    }
  return 0;
}