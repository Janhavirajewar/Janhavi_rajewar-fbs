void voting(int);
void main()
{
	int a;
	printf("Enter the age: ");
	scanf("%d",&a);
	 voting(a);
}
void voting(int age)
{
	if(age>=18)
		printf("person is eligible for voting");
		
	else if(age<=18)
	{
		printf("not eligible for voting");
	}
	
	else
	{
		printf("invalid input");
	}
}