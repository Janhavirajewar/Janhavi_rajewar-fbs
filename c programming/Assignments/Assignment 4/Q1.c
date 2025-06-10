#include<stdio.h>
void main()
{
	int r,num,rem,sum=0;
	int t;
	printf("enter range: ");
	scanf("%d",&r);
	for(num=1;num<=r;num++)
	{
		t=num;
		sum=0;

		while(t!=0)
		{
			rem=t%10;
			sum=sum+rem*rem*rem;
			t=t/10;
		}	
		if(num==sum)
		{
			printf("\n %d",num);
		}	
	}
		
}