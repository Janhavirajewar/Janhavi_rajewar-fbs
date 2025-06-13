#include<stdio.h>
int prime();
void main()
{
	int i=prime();
	if(i==1)
	printf("prime no");
	else
	printf("not prime");	
}
int prime()
{
	int num,flag=0,i=2;
	printf("Enter number: ");
	scanf("%d",&num);
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
		return 1;
			
}