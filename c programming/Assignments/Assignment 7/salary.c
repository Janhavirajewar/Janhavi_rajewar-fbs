void even(int);
void sal(double);
void main()
{
	int ch;
	printf("enter choice: ");
	scanf("%d",&ch);
	if(ch==1)
	{
		int n;
		printf("Enter no: ");
		scanf("%d",&n);
		even(n);
	}
	else
	{
		double salary;
		printf("Enter salary: ");
		scanf("%lf",&salary);
		sal(salary);
	}
}
	void even(int n)
	{
		if(n%2==0)
		{
			printf("even no");				
		}
		else
		printf(" odd no");
		
	}
	
	void sal(double salary)
	{
		double da,ta,hra,total;
		if(salary>=5000)
		{
		da=salary*0.10;
		ta=salary*0.15;
		hra=salary*0.20;
	}
	else
	{
		da=salary*0.15;
		ta=salary*0.25;
		hra=salary*0.30;
	}
		total=da+ta+hra;
		printf("total is %lf",total);
	
}
