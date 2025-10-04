#include<stdio.h>
char*strlwr(char*);
void main()
{
	char str[10];
	printf("enter string");
	scanf("%s",str);
	printf("\n string is %s",str);
	
	char*r=strlwr(str);
	printf("\n \tlower string is %s",r);
}
char*strlwr(char*str)
{
	int i=0;
	while(str[i]!='\0')
	{
		str[i]=str[i]+32;
		i++;
	}
	return str;	
}