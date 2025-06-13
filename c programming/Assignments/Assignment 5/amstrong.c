void armstrong();
void main()
{
	armstrong();	
}
void armstrong()
{

	int n,r,sum=0;
	printf("enter no: ");
	scanf("%d",&n);
	int t=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(sum==t)
	{
		printf("armstrong no");
	}
	else
	printf("not armstrong no");
}