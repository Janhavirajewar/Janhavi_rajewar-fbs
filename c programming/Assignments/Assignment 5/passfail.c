void passfail();
#include<stdio.h>
void main()
{
	passfail();	
}
void passfail()
	{

		int marks;
		printf("Enter marks");
		scanf("%d",&marks);
		if(marks>75)
		{
			printf("Distinction");
		}
		else if(marks>65)
		{
			printf("First class");
		}
		else if(marks>55)
		{
			printf("Second class");
		}
		else if(marks>45)
		{
			printf("Third class");
		}
		else if(marks>40)
		{
			printf("Pass class");
		}
		else if(marks<40)
		{
			printf("Fail");
		}
	}
