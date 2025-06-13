#include<stdio.h>
void prime();
void main()
{
	
	prime();
}
	void prime()
{
	int num,flag=0,i=2;
	printf("Enter number: ");
	scanf("%d",&num);
	
	while(i<num)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
			i++;
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
