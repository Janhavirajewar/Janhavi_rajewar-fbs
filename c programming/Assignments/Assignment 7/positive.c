void check(int);
void main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	check(n);
}
void check(int num)
{
	if(num>0)
		printf("%d is positive number",num);
	else
		{
			if(num<0)
				printf("%d is negative number",num);
			else
				printf("%d is neutral no",num);
		}
}