void voting();
void main()
{
	voting();
}

void voting()
{

	int age;
	printf("ente age: ");
	scanf("%d",&age);
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