// WAP to Take in Two Strings and Display the Larger String without Using Built-in fun
#include<stdio.h>
int strcmp(char*,char*);
void main()
{
	char str1[10];
	char str2[10];
	printf("enter string 1 and 2");
	scanf("%s%s",str1,str2);
	printf("string is %s%s",str1,str2);
	int res=strcmp(str1,str2);
	if(res==0)
	{
		printf("both are equal");
	}
	else if(res>0)
	{
		printf("string 1is greater");
	}
	else
	{
		printf("string 2 is greater");
	}
	
}
int strcmp(char*str1,char*str2)
{
	for(int i=0;str1[i]!='\0'||str2[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
		{
			if(str1[i]>str2[i])
			{
				return 1;
			}
			else
			{
				return -1;
			}
		}
	}
	return 0;
 } 