#include<stdio.h>
	int divisible(int);
	void main()
	{
		int num;
		printf("Enter the number");
		scanf("%d",&num);
		int r;
		r=divisible(num);
		if(r==0)
		{
			printf("Number is divisible by 3 but not by 5");
		}
		else if(r==1)
		{
			printf("Number is divisible by 5 but not by 3");
		}
		else if(r==2)
		{
			printf("Number is divisible by both 3 nd 5");
		}
		else if(r==3)
		{ 
			printf("Number is not divisible by 3 and 5");
		}
	}
	int divisible(int num)
	{
		
	    if(num%3==0&&num%5!=0)
	    {
	    	return 0;
		}
		else if(num%3==0&&num%5!=0)
		{
			return 1;
		}
		else if(num%3==0&&num%5==0)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
 