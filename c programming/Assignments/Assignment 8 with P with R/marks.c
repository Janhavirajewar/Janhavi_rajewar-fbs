int marks(int);
void main()
{
		int mark;
	printf("enter mark: ");
	scanf("%d",&mark);
	
	int r=marks(mark);
	if(r==0)
	{
		printf("A+");
	}
	else if(r==1)
	{
		printf("B+");
	}
	else if(r==2)
	{
		printf("c+");
	}
	else if(r==3)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
		
}
int marks(int marks)
{

		if(marks>=75)
		{
			return 0;
		}
		else
		{
			if(marks>=65)	
			return 1;
			
			else
			{
				if(marks>=55)
					return 2;
					
				else
				{
					if(marks>=35)
						return 3;
					
				}
			}
		}		
}