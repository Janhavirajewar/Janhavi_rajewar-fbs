#include<stdio.h>
void main()
{
	int s,e,sum=0;
	
	printf("enter starting no");
	scanf("%d",&s);
	
	printf("enter end");
	scanf("%d",&e);
	
	for(int n=s;n<=e;n=n+2)
	{
		
			sum=sum+n;
		}
		
		printf("\n sum is %d",sum);
		
	}
	
