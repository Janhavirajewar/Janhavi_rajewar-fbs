void table(int);
void main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	 table(n);
}
void table(int n)
{	
	int t;
	for(int i=1;i<=10;i++)
	{
		t=n*i;
	   printf(" %d * %d=%d \n",n,i,t);	
	   	
	}

}

