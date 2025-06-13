int age();
void main()
{
	
	int a=age();
	if(a==0)
	{
		printf("person is eligible for voting");
	}
	else if(a==1)	
	{
		printf("not eligible for voting");
	}

}
int age()
{
	int age;
	printf("enter age");
	scanf("%d",&age);
	if(age>=18)
	{
		return 0;	
	}
	else if(age<=18)
	{
		return 1;
	}

}