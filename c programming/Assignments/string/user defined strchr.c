#include<stdio.h>
char* mystrchr(char*,char);
void main()
{
	char str[10]="firstbit";
	char ch='b';
	
	char*res=mystrchr(str,ch);
	if(res==NULL)
	{
		printf("not f");
	}
	else
	{
		printf("%c",ch);
	}
}

 char* mystrchr(char*ptr,char x)
{
	int i=0;
	while(ptr[i]!='\0')
	{
		if(ptr[i]==x)
		{
			return &ptr[i];
		
		}
			i++;
	}
	 		return NULL;
}