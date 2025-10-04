#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	char str1[10];
	printf("enter string");
	scanf("%s",str);
	 printf("\n1st string is %s",str);
	 
	strncpy(str1,str,5);
	str1[5]='\0';
	printf("\n second string is %s",str1);
}