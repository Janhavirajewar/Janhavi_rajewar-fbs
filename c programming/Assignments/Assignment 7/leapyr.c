void yearr(int);
void main()
{
	int year;
	printf("Enter year: ");
	scanf("%d",&year);
	yearr(year);
	
}
void yearr(int year)
{
		if(year%4==0||year%100!=0&&year%400==0)
		
		{
			printf("%d year is leap year",year);
		}
		
		else
		{
			printf("%d year is not leap year",year);
		}
}

