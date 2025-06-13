#include<stdio.h>
int armstrong();
int main()
{

	if(armstrong())
	printf("\n is amstrong number");
	else
	printf("\n not armstrong no");
}
int armstrong()
{
	int num;
	int rem,sum=0,temp;
	printf("enter number : ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
		printf("\n number is %d",temp);
	
	if(sum==temp)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}