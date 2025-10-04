#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	
	printf("enter string");
	scanf("%s",str);
	int len=strlen(str);
	printf("\n length of string is %d",len);
	printf("\n string is %s",str);

	
}