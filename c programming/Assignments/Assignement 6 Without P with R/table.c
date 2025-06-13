int table();
void main()
{
	int s=table();
	printf("table" );	
}
int table()
{	
	int i=1;
	int t,n=5;
	while(i<=10)
	{
		t=n*i;
	   	i++;
	}
	return t;
}