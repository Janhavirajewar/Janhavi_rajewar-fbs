#include<stdio.h>
int gender(int , char);
void main()
{
	int age;
	char gen;
	printf("enter age:");
	scanf("%d",&age);
	printf("\n enter gender f/m: ");
	fflush(stdin);
	scanf("%c",&gen);
	int t=gender(age,gen);
	if(t==0)
	{
		printf("gender is female and eligible for marriage");	
	}	
	else if(t==1)
	{
		 printf("gender is male and eligible for marriage");	
	}
	else
	{
			printf("not eligible for marriage and gender not defined");
	}
}
int gender(int age,char gender)
{
	if(age==18 && gender=='f')
	{
		return 0;
	}
	else
	{
		if(age==21 && gender=='m')
		
		{
			return 1;
		}
		else
		{
			return 3;
		}
	}
	
}
