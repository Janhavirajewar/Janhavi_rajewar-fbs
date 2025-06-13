#include<stdio.h>
void prime();
void main()
{
	
	prime();
}
void prime()
{
	int r;
	printf("enter range");
	scanf("%d",&r);
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