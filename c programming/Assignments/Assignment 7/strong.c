#include<stdio.h>
void strong(int);
void main()
{
	int num;
	printf("Enter number to check strong or not: ");
	scanf("%d",&num);
	strong(num);
}
void strong(int num)
{
	int rem=0,temp=0;
	int sum=0;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		int i=1, fact=1;
		while(i<=rem)
		{
			fact=fact*i;
			i++;
		}
		
		sum=sum+fact;
		num=num/10;
	}
	if(sum==temp)
	{
		printf("%d is strong number ",temp);
	}
	else
	{
		printf("%d is not strong number",temp);
	}
}
