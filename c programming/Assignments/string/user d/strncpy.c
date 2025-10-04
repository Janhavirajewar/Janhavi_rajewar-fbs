char*mystrncpy(char*,char* ,int);
#include<stdio.h>
void main()
{
	char str[20];
	char str1[20];
	int n=2;
	printf("enter string");
	scanf("%s",str);
//	printf("%s",str);
	
	char*c=mystrncpy(str1,str,n);
	printf("string is %s",c);
}

char* mystrncpy(char*str1,char*str,int b)
{
	int i;
	for(i=0;i<b&&str[i]!='\0';i++)
	{
		str1[i]=str[i];
	}
	str1[i]= '\0';
	
	return str1;
}