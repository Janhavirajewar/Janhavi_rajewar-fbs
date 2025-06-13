int leapyear();

void main()
{
	int i=leapyear();
	if(i==1)
	printf("leap year");
	else
	printf("not leap year");
}
int leapyear()
	{
		int year=1700;
		if (year%4==0||year%100!=0||year%400==0)
		return 1;
		else
		return 0;
		
	}

