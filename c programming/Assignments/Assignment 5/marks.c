void main()
{
	
	marks();	
	
}

void marks()
{

	int marks;
	printf("enter marks");
	scanf("%d",&marks);
		if(marks>=75)
		{
			printf("A+");
		}
		else
		{
			if(marks>=65)	
				printf("B+");
			
			else
			{
				if(marks>=55)
					printf("c+");
					
				else
				{
					if(marks>=35)
						printf("pass");
					else
					{
						printf("fail");
					}
					
				}
			}
		}		
}