#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	char str1[10];
	printf("enter string");
	scanf("%s",str);
	 printf("\n1st string is %s",str);
	 
	char*p=strcpy(str1,str);
	printf("\n second string is %s",p);
}