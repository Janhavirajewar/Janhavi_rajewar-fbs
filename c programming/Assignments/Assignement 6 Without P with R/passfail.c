#include<stdio.h>
int passfail();
void main()
{
	int r;
	r=passfail();
	if(r==0)
	{
		printf("Distinction");	
	}	
	else if(r==1)
	{
			printf("First class");
	}
	
	else if(r==2)
	{
		printf("Second class");
	}
	else if(r==3)
	{
		printf("Third class");
	}
	else if(r==4)
	{
		printf("Pass class");
	}
	else
	printf("fail");
	
}
int passfail()
	{

		int marks;
		printf("Enter marks");
		scanf("%d",&marks);
		if(marks>75)
		{
			return 0;
		}
		else if(marks>65)
		{
			return 1;
		}
		else if(marks>55)
		{
			return 2;
		}
		else if(marks>45)
		{
			return 3;
		}
		else if(marks>40)
		{
			return 4;
		}
			
	}
