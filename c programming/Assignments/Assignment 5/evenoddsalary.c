void evenodd();
void salary();
void main()
{
	int ch;
	printf("enter chioce");
	scanf("%d",&ch);
	if(ch==1)
	{
		evenodd();
	}
	else
	{
		salary();
	}	
}
	void evenodd()
	{
		int n;
		printf("enter no: ");
		scanf("%d",&n);
		if(n%2==0)
		{
			printf("even no");				
		}
		else
		printf(" odd no");
		
	}
	
	void salary()
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
		printf("total is %lf",total);
	}
