// selling price based on cp and dis :


#include<stdio.h>

int book(int);
void main()

{
	int cp;
	printf("enter cost price of book: ");
	scanf("%d",&cp);
	
	int s=book(cp);	
	printf("selling price of book is %d",s);
}

int book(int cp)
{
	int sp,dis;
	
	if(cp>=1000)
	{
		dis=cp*0.20;
	}
	else if(cp>=500)
	{
		dis=cp*0.15;
	}
	else if(cp>=300)
	{
		dis=cp*0.1;
	}	
	sp=cp-dis;
	
	return sp;
	
}