int perfect();
void main()
{
	if(perfect())
	printf("perfect");
	else
	printf("not perfect");	
}
int perfect()
{
	int num;
	int i=1,sum=0;
	printf("Enter number");
	scanf("%d",&num);

	while(i<num)
	{
		if(num%i==0)
		sum=sum+i;
		i++;
	}
		return (sum==num);
	
}
