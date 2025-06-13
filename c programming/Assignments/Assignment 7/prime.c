#include<stdio.h>
void prime(int);
void main()
{
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	prime(num);
}
void prime(int num)
{
	int flag=0;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}		
	}
	if(flag==0)
	{
		printf("prime no is %d",num);
	}
	else
	{
		printf("%d is not prime no",num);
	}
	
}