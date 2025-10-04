#include<stdio.h>
char*strupr(char*);
void main()
{
	char str[10];
	printf("enter string");
	scanf("%s",str);
	char*r=strupr(str);
	printf("%s",str);
}

char*strupr(char*str)
{
	for(int i=0;str[i]!='0';i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-32;
		}
	}
	return str;
}