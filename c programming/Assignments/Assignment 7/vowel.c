#include<stdio.h>
void scharacter(char);
void main()
{
	char ch;
	printf("Enter character: ");
	scanf("%c",&ch);
	character(ch);
}
void character(char ch)
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("\n %c character is vowel",ch);
		
	}
	
	else
	{
		printf("\n %c character is consonent",ch);
	}
}