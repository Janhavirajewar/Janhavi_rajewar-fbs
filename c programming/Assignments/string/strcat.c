#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	char str2[10];
	 printf("enter two strings");
	 scanf("%s%s",str,str2);
	 
	 printf("\nfirst string is %s",str);
	 printf("\nsecond string is %s",str2);
	 
	 strcat(str,str2);
	 
	 printf("\n concanicate string is %s",str);
	 
}