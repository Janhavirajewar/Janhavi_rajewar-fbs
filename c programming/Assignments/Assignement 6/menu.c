#include<stdio.h>
int menu();
void main()
{
	int r=menu();
	printf("result is %d",r);
}
int menu()
{
	int n1,n2,c;
	char ch;
	printf("Enter two numbers:");
	scanf("%d%d",&n1,&n2);
	printf("'+'. for addition,'-'. for sub,'*'. for mul,'/'. for div");
	printf("\n enter your choice ");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='+')
	{
		c=n1+n2;
		
	}
	else if(ch=='-')
	{
		c=n1-n2;
		
	}
	else if(ch=='*')
	{
		c=n1*n2;
		
	}
	else if(ch=='/')
	{
		c=n1/n2;	
	}
	return c;
	
}