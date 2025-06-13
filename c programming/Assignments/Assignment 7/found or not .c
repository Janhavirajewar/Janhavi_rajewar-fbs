#include<stdio.h>
int digfound(int ,int);
void main()
{
	int no=123456;
	int dig=3;
	
	int res=digfound(no,dig);
	if(res==1)
	{
		printf("found");
	}
	else
	{
		printf("not found");
	}
}

int digfound(int no,int dig)
{

	int t=0;
	while(no>0)
	{
		t=no%10;
		if(t==dig) 
		{
			
			return 1;
		}
		no=no/10;
	}

		
	return 0;	
	
}