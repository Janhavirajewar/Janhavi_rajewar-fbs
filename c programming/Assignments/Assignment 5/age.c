void marrige();
void main()
{
	
	marrige();	
}
void marrige()
{

	int age;
	printf("enter age");
	scanf("%d",&age);
	char gender='m';
	if(age>=18 && gender=='f')
	{
		printf("gender is female and eligible for marriage");
	}
	
	else
	{
		if(age==21 && gender=='m')
		
		{
			printf("male and eligible for marrige");
		}
		else
		{
			printf("not eligible for marriage and gender not defined");
		}
	}
	
}

