int age(int);
void main()
{
	int age;
	printf("enter age");
	scanf("%d",&age);	
	int a=agee(age);
	if(a==0)
	{
		printf("person is eligible for voting");
	}
	else if(a==1)	
	{
		printf("not eligible for voting");
	}

}
int agee(int age)
{
	if(age>=18)
	{
		return 0;	
	}
	else if(age<=18)
	{
		return 1;
	}

}