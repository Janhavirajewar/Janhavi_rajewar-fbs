#include<stdio.h>
void sum(int,int);
void sub(int,int);
void mul(int,int);
void main()
{
	int n1,n2;
	printf("Enter two numbers: ");
	scanf("%d%d",&n1,&n2);
	sum(n1,n2);
	sub(n1,n2);
	mul(n1,n2);
}
void sum(int a,int b)
{
	int res;
	res=a+b;
	printf("\n Addition of two nos is %d",res);
}
void sub(int a,int b)
{
	int res;
	res=a-b;
	printf("\n substraction is %d",res);
}
void mul(int a,int b)
{
	int res;
	res=a*b;
	printf("\n multiplication is %d",res);
}
