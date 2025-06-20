#include<stdio.h>
int fact(int);
void main()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
	int i;
	i=fact(n);
	printf("factorial is %d",i);
}
int fact(int n)
{
	
	int i=1,fact=1;

	while(i<=n)
	{
		fact=fact*i;		
		i++;
	}
		return fact;
}