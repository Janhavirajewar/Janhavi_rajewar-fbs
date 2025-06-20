int perfect();
void main()
{
	int num;
	printf("Enter number");
	scanf("%d",&num);

	if(perfect())
	printf("perfect");
	else
	printf("not perfect");	
}
int perfect()
{
	
	int i=1,sum=0;
	
	while(i<num)
	{
		if(num%i==0)
		sum=sum+i;
		i++;
	}
		return (sum==num);
	
}
