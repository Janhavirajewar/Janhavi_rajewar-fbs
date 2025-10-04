char*mystrcpy(char*,char*);
#include<stdio.h>
void main()
{
	char str[20];
	char str1[20];
	printf("enter string");
	scanf("%s",str);
//	printf("%s",str);
	
	char*c=mystrcpy(str1,str);
	printf("string is %s",c);
}

char* mystrcpy(char*str1,char*str)
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		str1[i]=str[i];
	}
	str1[i]= '\0';
	
	return str1;
}