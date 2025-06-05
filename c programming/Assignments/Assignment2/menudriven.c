#include<stdio.h>
void main()
{
	int n1,n2,c;
	int ch;
	printf("Enter two numbers");
	scanf("%d%d",&n1,&n2);
	printf("enter your choise ");
	printf("1. for addition,2. for sub,3. for mul,4. for div");
	scanf("%d",&ch);
	if(ch==1)
	{
		c=n1+n2;
		printf("\n Addition of two nos is %d",c);
	}
	else if(ch==2)
	{
		c=n1-n2;
		printf("\n substration of two nos is %d",c);
	}
	else if(ch==3)
	{
		c=n1*n2;
		printf("\n multiplication of two nos is %d",c);
	}
	else if(ch==4)
	{
		c=n1/n2;
		printf("\n divition of two nos is %d",c);
	}
	else
	{
		printf("\n invalid ");
	}
}