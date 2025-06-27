#include<stdio.h>
int wordcount(char*);
void main()
{
	char str[100];
	printf("enter string");
	gets(str);
	printf("string is %s",str);
	int i=wordcount(str);
	printf("%d",i);
}

int wordcount(char*str)
{
	int c=0;
	for(int i=0;str[i]!='\0';i++)
	{
	 	 if ((i == 0 && str[i] != ' ') || (str[i] != ' ' && str[i - 1] == ' ')) 
            
		{
			c++;
		}
	}
	return c;
}