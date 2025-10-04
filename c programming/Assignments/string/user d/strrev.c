#include<stdio.h>
char*strrev(char*,int);
void main()
{
	char str[10];
	printf("Enter string");
	scanf("%s",str);
	int len=strlen(str);
	char*p=strrev(str,len);
	printf("%s",str);
}
char*strrev(char*str,int len)
{
	int i,j;
	for(i=0,j=len-1;i<j;i++,j--)
	{
		char t=str[i];
		str[i]=str[j];
		str[j]=t;
	}
	return str;
}