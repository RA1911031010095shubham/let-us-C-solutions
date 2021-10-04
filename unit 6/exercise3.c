#include<stdio.h>

int main()
{
    int count , x , y , z , num ;

   for (count=100; count<400 ; count++)
   {
       x= count%10;
       y= (count/10)%10;
       z= ((count/10)/10);

       if (x==1 || x==2 || x==3)
       {
           if (y==1 || y==2 || y==3)
           {
               if (z==1 || z==2 || z==3)
               {
                   if (x==y || y==z || x==z)
                   {
                       
                   }
                   else
                   {
                       printf("%d\n" , count);
                   }
                   
               }
               
           }
           
       }
       
   }
   return 0;


}