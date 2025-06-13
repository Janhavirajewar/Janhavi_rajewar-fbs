#include<stdio.h>
void arm(int);
void main()
{
	int r;
	printf("enter range: ");
	scanf("%d",&r);
	arm(r);
	
}
void arm(int r){
	int num,rem=0,sum;
	for(num=1;num<=r;num++)
	{
		int t=num,count=0;
		while(t>0)
		{
			count++;
			t=t/10;
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