#include<stdio.h>
void perfect(int);
void main()
{
	int r;
	printf("enter range: ");
	scanf("%d",&r);
	perfect(r);
}
void perfect(int r)
{
	int num,sum,i=0;
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