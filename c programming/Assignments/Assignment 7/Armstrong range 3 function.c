#include<stdio.h>
int isArmstrong(int);
int getcount(int);
int power(int,int);
void main()
{
	int no;
	printf("Enter no: ");
	scanf("%d",&no);
	int i =isArmstrong(no);
	if(i==1)
	{
		printf("\n Armstrong no");
	}
	else
	{
	printf("\n not armstrong no");
	}
}
int isArmstrong(int no)
{
	int count=getcount(no);
	int temp=no;
	int rem,sum=0;
	printf("\n count is %d",count);
	while(no>0)
	{
		rem=no%10;
		sum=sum+power(rem,count);
		no=no/10;
	}
	if(sum==temp)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
int getcount(int no)
{
	int count=0;
	while(no>0)
	{
		count++;
		no=no/10;
	}
	return count;
}

int power(int base,int exp)  // exp:count , base:rem
{
	int res=1;
	for(int j=1;j<=exp;j++)
	{
		res=res*base;
	}
	return res;
}