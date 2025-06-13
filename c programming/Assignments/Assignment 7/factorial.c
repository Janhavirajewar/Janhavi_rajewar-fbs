#include<stdio.h>
void fact(int);
void main()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
	fact(n);
}
void fact(int num)
{
	int fact=1,i=1;
	while(i<=num)
	{
		fact=fact*i;	
		i++;
	}
	printf("factorial is %d",fact);
}