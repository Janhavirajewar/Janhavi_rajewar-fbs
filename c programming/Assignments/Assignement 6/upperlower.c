int uppelower();
void main()
{
	if(upperlower())
	printf("uppercase");
	else
	printf("lowercase");
}
	int upperlower()
	{
		char ch;
		printf("enter character");
		scanf("%c",&ch);
	 return	(ch>='A'&& ch<='Z');
		
	}
