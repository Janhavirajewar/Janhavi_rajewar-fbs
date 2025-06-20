int leapyear(int);

void main()
{
	int y;
	printf("enter year: ");
	scanf("%d",&y);
	int i=leapyear(y);
	if(i==1)
	printf("leap year");
	else
	printf("not leap year");
}
int leapyear(int year)
	{
	
		if (year%4==0||year%100!=0&&year%400==0)
		return 1;
		else
		return 0;
		
	}

