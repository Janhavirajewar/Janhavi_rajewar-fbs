int evenodd();
double salary();
void main()
{
	int ch;
	printf("enter chioce");
	scanf("%d",&ch);
	if(ch==1)
	{
		int r;
		r=evenodd();
		if(r==1)
		{
			printf("even");
		}
		else
		{
			printf("odd");
		}
	}
	else
	{
		double a=salary();
		printf("salary is %lf",a);
	}	
}
	int evenodd()
	{
		int n;
		printf("enter no: ");
		scanf("%d",&n);
		if(n%2==0)
		return 1;
		
	}
	
	double salary()
	{
		double salary=5000;
		double da,ta,hra,total;
		if(salary>=500)
		{
			da=salary*0.10;
			ta=salary*0.15;
			hra=salary*0.20;
		
		}
		else
		{
			da=salary*0.15;
			ta=salary*0.20;
			hra=salary*0.25;
		}
		
		total=da+ta+hra;
		return total;
	}
