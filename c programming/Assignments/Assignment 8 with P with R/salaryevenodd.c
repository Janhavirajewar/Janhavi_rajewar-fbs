int evenodd(int);
double salary(double);
void main()
{
	int ch;
	printf("enter chioce");
	scanf("%d",&ch);
	if(ch==1)
	{
		int n;
		printf("enter no: ");
		scanf("%d",&n);
		int r;
		r=evenodd(n);
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
		double sal;
		printf("enter salary");
		scanf("%lf",&sal);
		double a=salary(sal);
		printf("salary is %lf",a);
	}	
}
	int evenodd(int n)
	{
		if(n%2==0)
		{
		return 1;
		}
		else
		{
			return 0;
		}
		
		
	}
	
	double salary(double salary)
	{
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
