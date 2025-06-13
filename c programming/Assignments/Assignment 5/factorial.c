#include<stdio.h>
void fact();
void main()
{
	fact();
}
void fact()
{
	int n=5,fact=1;
	for(int i=1;i<=5;i++)
	{
		fact=fact*i;
	}
	printf("factorial is %d",fact);
}