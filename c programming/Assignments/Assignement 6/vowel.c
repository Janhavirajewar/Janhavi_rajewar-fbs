int vowel();
void main()
{
	if(vowel())
	{
		printf("vowel");
	}
	else
	printf("character is consonent");
}

int vowel()
{
	char ch;
	printf("enter character");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}