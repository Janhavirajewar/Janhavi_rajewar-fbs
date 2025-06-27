// WAP to Take in a String and Replace Every Blank Space with special symbol.

#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("\n enter string");
	gets(str);
	printf("\n string is %s",str);
	int len=strlen(str);
	printf("\n length is %d",len);
	int i=0;
	while(i<len)
	{
		if(str[i]==' ')
		{
			str[i]='@';
		}
		i++;
	}
	
	printf("\n string is %s",str);
}
