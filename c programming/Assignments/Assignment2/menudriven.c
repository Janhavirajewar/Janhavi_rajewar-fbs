#include<stdio.h>
void main()
{
	int n1,n2,c;
	char ch;
	printf("Enter two numbers");
	scanf("%d%d",&n1,&n2);
	printf("'+'. for addition,'-'. for sub,'*'. for mul,'/'. for div");
	printf("\n enter your choice ");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='+')
	{
		c=n1+n2;
		printf("\n Addition of two nos is %d",c);
	}
	else if(ch=='-')
	{
		c=n1-n2;
		printf("\n substration of two nos is %d",c);
	}
	else if(ch=='*')
	{
		c=n1*n2;
		printf("\n multiplication of two nos is %d",c);
	}
	else if(ch=='/')
	{
		c=n1/n2;
		printf("\n divition of two nos is %d",c);
	}
	else
	{
		printf("\n invalid ");
	}
}