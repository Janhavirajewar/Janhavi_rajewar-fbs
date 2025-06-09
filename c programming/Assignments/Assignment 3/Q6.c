void main()
{
	int num;
	int i=1,sum=0;
	printf("Enter number");
	scanf("%d",&num);
	int t=num;
	while(i<num)
	{
		if(num%i==0)
		sum=sum+i;
		i++;
	}
		if(sum==t)
		{
			printf("perfect no is %d",sum);
		}
		else
		{
			printf("not perfect");
		}
}
