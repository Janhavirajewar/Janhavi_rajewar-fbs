#include<stdio.h>
int mylen(char*);
void main()
{
	char str[10];
	printf("enter string");
	scanf("%s",str);
	printf("%s",str);
	int l=mylen(str);
	printf("len is %d",l);
}

int mylen(char*str)
{ 
	int c=0;
	for(int i=0;str[i]!='\0';i++)
	{
		c++;
	}
	return c;
}