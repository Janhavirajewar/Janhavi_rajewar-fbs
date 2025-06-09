#include<stdio.h>
void main()
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
		printf("\n %d  is amstrong number",sum);
	}
	else
	{
		printf("\n %d  is not amstrong number",sum);
	}
	
}