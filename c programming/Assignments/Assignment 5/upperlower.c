void uppelower();
void main()
{
	upperlower();
}
	void upperlower()
	{
		char ch;
		printf("enter character");
		scanf("%c",&ch);
		if(ch>='A'&& ch<='Z')
			{
				printf("%c is uppercase character",ch);
				
			}
		else 
			
			{
				printf("%c is lower character",ch);
			}
	}
