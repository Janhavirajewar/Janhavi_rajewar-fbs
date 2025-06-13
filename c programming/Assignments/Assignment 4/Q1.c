#include<stdio.h>
void main()
{
	int r,rem=0,sum;
	printf("enter range: ");
	scanf("%d",&r);
	for(int num=1;num<=r;num++)
	{
		int temp=num;
		int count=0;
		while(temp>0)
		{
			count++;
			temp=temp/10;
		}	
		int n=num;
		sum=0;
		while(n>0)
		{
			rem=n%10;
			int res=1;
			for(int i=1;i<=count;i++)
			{
				res=res*rem;
			}
			sum=sum+res;
			n=n/10;
		}	
		if(sum==num)
		{
			printf("\n %d",sum);
		}	
	}	
}