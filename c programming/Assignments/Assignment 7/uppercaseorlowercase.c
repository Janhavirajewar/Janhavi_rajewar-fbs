#include<stdio.h>
void check(char);
void main()
{
	char ch;
	printf("Enter character: ");
	scanf("%c",&ch);
	check(ch);
}
 void check(char ch)
{
		if(ch>='A'&& ch<='Z')
			{
				printf("%c is uppercase character",ch);	
			}
		else 
			{
				printf("%c is lower character",ch);
			}
		
}