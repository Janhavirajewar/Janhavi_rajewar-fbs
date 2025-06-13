void marks(int);

void main()
{
	int mark;
	printf("Enter marks: ");
	scanf("%d",&mark);
	marks(mark);
}
void marks(int mark)
{
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