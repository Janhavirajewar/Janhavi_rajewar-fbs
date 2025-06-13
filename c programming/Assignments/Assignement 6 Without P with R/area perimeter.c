#include<stdio.h>
int peri();
int area();
void main()
{
	int p= peri();
		printf("perimeter of rectangle is %d \n",p);
		
	int a=area();
	printf("area is %d",a);
}
int peri()
{
	int l=4,w=4;
	int r=2*(l+w);
	return r;
}

int area()
{
	int l=4,b=4;
	int a=l*b;
	return a;
}