#include<stdio.h>
#include<math.h>
float dis(float , float , float , float);
float area(float , float , float);
float ret(float , float , float , float);

int main()
{
	float x1 , y1 , x2 , y2 , x3 , y3 , x4 , y4 , ab , bc , ac , ad , bd  , cd , area1 , area2 , area3 , area4 , r ;
   {
	   printf("we will find the distance between two points\n");

	printf("please enter the values of point A (x1,y1)\n");
	scanf("%f%f" , &x1 , &y1 );

	printf("please enter the values of point B (x2,y2)\n");
	scanf("%f%f" , &x2 , &y2 );

    ab=dis(x1 , y1 , x2 , y2);
	printf("the distance of AB is %f\n" , ab ); 
   }
   {
	   printf("we will find out the area of triangle\n");

	printf("please enter the values of point A (x1,y1)\n");
	scanf("%f%f" , &x1 , &y1 );

	printf("please enter the values of point B (x2,y2)\n");
	scanf("%f%f" , &x2 , &y2 );

	printf("please enter the values of point C (x3,y3)\n");
	scanf("%f%f" , &x3 , &y3 );

	ab=dis(x1 , y1 , x2 , y2);

	ac=dis(x1 , y1 , x3 , y3);

	bc=dis(x2 , y2 , x3 , y3);

    area1=area(ab , bc , ac);
	printf("the area of triangle abc is %f\n" , area1);
   }
   {
	   printf("now we will check that the point lies inside or outside of the triangle\n");

	   
	printf("please enter the values of point A (x1,y1)\n");
	scanf("%f%f" , &x1 , &y1 );

	printf("please enter the values of point B (x2,y2)\n");
	scanf("%f%f" , &x2 , &y2 );

	printf("please enter the values of point C (x3,y3)\n");
	scanf("%f%f" , &x3 , &y3 );

	printf("please enter the values of point D (x4,y4)\n");
	scanf("%f%f" , &x4 , &y4 );

	ab=dis(x1 , y1 , x2 , y2); 

	ac=dis(x1 , y1 , x3 , y3);

	bc=dis(x2 , y2 , x3 , y3);

	ad=dis(x1 , y1 , x4 , y4);

	bd=dis(x2 , y2 , x4 , y4);

	cd=dis(x3 , y3 , x4 , y4);

	area1=area(ab , bc , ac);

	area2=area(ab , bd , ad);

	area3=area(bc , bd , cd);

	area4=area(ac , cd , ad);

	r= ret(area1 , area2 , area3 , area4);
	printf("%f\n" , r);
   }

   return 0;



}
float dis(float x , float y , float x1 , float y1)
{
	float d ;

	d= sqrt(pow((x1-x),2.0) + pow((y1-y),2.0));
	return(d);

}
float area(float a , float b , float c)
{
	float area , s;

	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	return(area);
     
}
float ret(float a , float b , float c , float d)
{
    if (a==b+c+d)
	{
		return(1);
	}
	else
	{
		return(0);
	}
	
}