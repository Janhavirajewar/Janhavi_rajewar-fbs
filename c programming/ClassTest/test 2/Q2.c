#include<stdio.h>
void main()
{
	int num;
	printf("Enter two nos: ");
	scanf("%d",&num);
	if(num>0)
	{
		printf("%d number is positive",num);
	}
	else if(num<0)
	{
		printf("%d number is negative",num);
	}
	else
	{
		printf(" %d number is neutral ",num);
	}
}