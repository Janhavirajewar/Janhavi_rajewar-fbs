#include<stdio.h>
int peri(int,int);
int area(int,int);
void main()
{
	int l,w;
	printf("Enter length and width: ");
	scanf("%d%d",&l,&w);
	int p= peri(l,w);
		printf("perimeter of rectangle is %d \n",p);
		
	int a=area(l,w);
	printf("area is %d",a);
}
int peri(int l,int w)
{
	int r=2*(l+w);
	return r;
}

int area(int l,int w)
{
	int a=l*w;
	return a;
}