int great(int ,int ,int);

void main() 
{
	int n1,n2,n3;
	printf("enter three nos");
	scanf("%d%d%d",&n1,&n2,&n3);
	int c;
	c=great(n1,n2,n3);
	if(c==0)
	printf("n1 is greater");
	
	else if(c==1)
	printf("n3 is greater");
	
	else if(c==2)	
	printf("n2 is greater");
	
	else
	printf("n3");
	
}
int great(int n1,int n2,int n3)
{

	
		if(n1>n2) {
			
		if(n1>n3) 
		{
			return 0;
		} else
		{
			return 1;
		}
	}

	else {
		if(n2>n3) 
		{
    		return 2;
		}
	}
}