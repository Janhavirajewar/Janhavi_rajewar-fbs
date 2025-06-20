char upper(char);
void main()
{
	char ch;
	printf("enter character");
	scanf("%c",&ch);
	if(upper(ch))	
	{
	printf("uppercase");
	}
	else
	{
	printf("lowercase");
	}
}
char upper(char ch)
	{
	
	 if	(ch>='A'&& ch<='Z')
	 {
	 	return 1;
	 }
	 else
	 {
	 	return 0;
	 }
	 
		
	}
