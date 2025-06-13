#include<stdio.h>
void arm(int);
void main()
{
	int n;
	printf("Enter num: ");
	scanf("%d",&n);
	arm(n);
	
}
void arm(int no)
{
	int temp=no,rem=0,sum=0;
	int count=0;
	while(no>0)
	{
		count++;
		no=no/10;
	}
	printf("\n count is %d",count);
	
	int n=temp;
	while(n>0)
	{
		rem=n%10;
		int i=1,res=1;
		while(i<=count)
		{
			res=res*rem;
			i++;
		}
		sum=sum+res;
		n=n/10;
		printf("\n pow is %d",res);
	}
		
	if(sum==temp)
	{
		printf("\n armstrong no");
	}
	else
	{
		printf("\n not armstrong no");
	}

	
}