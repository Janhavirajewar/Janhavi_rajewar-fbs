#include<stdio.h>
void main()
{
	int r,flag=0,num,i;
	printf("enter range");
	scanf("%d",&r);
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