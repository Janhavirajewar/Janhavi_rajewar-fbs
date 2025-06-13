#include<stdio.h>
void prime(int);
void main()
{
	int r;
	printf("enter range");
	scanf("%d",&r);
	prime(r);
}
void prime(int r)
{
	int flag=0,num,i;
	for(num=2;num<r;num++)
	{
		flag=0;
		for(i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("\n %d",num);
		}
	}
}