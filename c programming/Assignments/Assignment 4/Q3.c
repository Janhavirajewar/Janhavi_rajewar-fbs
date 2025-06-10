#include<stdio.h>
void main()
{
	int r=0;
	int num,sum,i=0;
	printf("enter range: ");
	scanf("%d",&r);
	for(num=1;num<r;num++)
	{
		sum=0;	
			for(i=1;i<num;i++)
			{
				if(num%i==0)
				{
					sum=sum+i;
				}
			}
		if(sum==num)
		{
			printf("\n %d",num);
		}
	}
}