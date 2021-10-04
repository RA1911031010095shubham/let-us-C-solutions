#include<stdio.h>
void fun();

int main()
{
	int x , y ,z;

	printf("please input the values of x,y,z\n");
	scanf("%d%d%d" , &x , &y , &z );

    fun(&x , &y , &z); 
	printf("the value of x=%d\n , y=%d\n , z=%d\n" , x , y , z);
	return 0;
}
void fun(int *a , int *b , int *c)
{
    int t , m;
	t=*a;
	*a=*c;
    m=*b;
	*b=t;
	*c=m;

}