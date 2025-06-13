int gender();
void main()
{
	int t=gender();
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
int gender()
{
	int age=3;
	char gender='f';
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
