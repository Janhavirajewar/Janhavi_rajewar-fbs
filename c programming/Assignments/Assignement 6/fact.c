#include<stdio.h>
int fact();
void main()
{
	int i;
	i=fact();
	printf("factorial is %d",i);
}
int fact()
{
	int n;
	int i=1,fact=1;
	printf("enter number :");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;		
		i++;
	}
		return fact;
}