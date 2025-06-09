#include<stdio.h>
void main()
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
	printf("factorial is %d",fact);
}