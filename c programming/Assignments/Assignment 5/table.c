void table();
void main()
{
	
	table();	
}
void table()
{

	int i=1;
	int t,n;
	printf("enter no: ");
	scanf("%d",&n);
	while(i<=10)
	{
		t=n*i;
	   printf(" %d * %d=%d \n",n,i,t);
		i++;
	}
}