#include<stdio.h>
int menu(int,int,char);
void main()
{
	int n1,n2;
	char ch;
	printf("Enter two numbers:");
	scanf("%d%d",&n1,&n2);
	printf("'+'. for addition,'-'. for sub,'*'. for mul,'/'. for div");
	printf("\n enter your choice ");
	fflush(stdin);
	scanf("%c",&ch);
	int r=menu(n1,n2,ch);
	printf("result is %d",r);
}
int menu(int n1,int n2,char ch)
{
	int c;

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