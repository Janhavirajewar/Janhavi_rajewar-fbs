void main()
{
	int s,e;
	
	printf("enter starting no");
	scanf("%d",&s);
	
	printf("enter end");
	scanf("%d",&e);
	
	for(int n=s;n<=e;n++)
	{
		
		for(int i=n;i<=n;i++)
		{
		
		if(i%2==0)
		{
		
			printf(" : %d",i);
		
		}
		else
		{
			printf("  : %d",i);
		}
		
	}
	}
}