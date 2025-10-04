#include<stdio.h>
#include<string.h>
void main()
{
	char str[30];
	char str2[10];
	 printf("enter two strings");
	 scanf("%s%s",str,str2);
	 
	 printf("\nfirst string is %s",str);
	 printf("\nsecond string is %s",str2);
	 
	 int l=strlen(str);
	 printf("\n len is %d",l);
	 
	 int i=0;
	 while(str2[i]!='\0')
	 {
	 	str[l+i]=str2[i];
	 	i++;
	 }
	 str[l+i]='\0';
	 printf("\n concanicate string is %s",str);
	 
}