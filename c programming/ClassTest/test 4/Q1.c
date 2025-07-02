#include<stdio.h>
void main()
{
	int r,sum=0;
	printf("enter range");
	scanf("%d",&r);
	
	for(int i=10;i<=r;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				printf("\n factors of %d is %d",i, j);
			}
		}
	}
	
	
}