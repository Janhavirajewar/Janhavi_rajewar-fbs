// WAP Replace all Occurrences of ‘a’ with $ in a String

#include<stdio.h>
char*tryy(char*);
void main()
{
	char str[20];
	printf("enter string");
	gets(str);
	printf("\n string is  %s",str);
	char*r=tryy(str);
	printf("\n %s",r);
}
char*tryy(char*str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a')
		{
			str[i]='$';
		}
		i++;
	}
	return str;
}