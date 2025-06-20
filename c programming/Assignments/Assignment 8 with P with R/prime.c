#include<stdio.h>
int prime(int);
void main()
{
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	int i=prime(num);
	if(i==1)
	printf("prime no");
	else
	printf("not prime");	
}
int prime(int num)
{
	int flag=0,i=2;
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
		return 1;
			
}