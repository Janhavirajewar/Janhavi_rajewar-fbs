#include<stdio.h>
void main()
{
	int num,r,i,j,fact;
	int rem=0,temp=0;
	int sum=0;
	printf("Enter range: ");
	scanf("%d",&r);
	for(num=1;num<=r;num++)
	{		
			temp=num;
			int sum=0;	
			
			while(temp)
			{
				rem=temp%10;
				int fact=1;				
				for(j=1;j<=rem;j++)
				{
					fact=fact*j;			
				}
			
				sum=sum+fact;
				temp=temp/10;	
			}	
					if(sum==num)
				{
					printf("\n %d is strong number ",num);
		        }
								
	}
		
}
