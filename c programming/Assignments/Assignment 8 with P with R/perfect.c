int perfect(int);
void main()
{
	int num;
	printf("Enter number");
	scanf("%d",&num);

	if(perfect(num))
	printf("perfect");
	else
	printf("not perfect");	
}
int perfect(int num)
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
