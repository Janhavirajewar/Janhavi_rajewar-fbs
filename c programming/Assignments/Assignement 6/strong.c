#include<stdio.h>
int strong();
void main()
{
	
	if(strong())
	{
		printf("strong");
	}
	else
	printf("not strong");
}
int strong()
{
	int num=0;
	int rem=0,temp=0;
	int sum=0;
	printf("Enter number to check strong or not: ");
	scanf("%d",&num);
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
	
	return (sum==temp);

}
