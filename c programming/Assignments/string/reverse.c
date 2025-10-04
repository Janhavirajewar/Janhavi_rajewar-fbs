#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int i,j,t;
	printf("\n enter string");
	scanf("%s",str);
	int len=strlen(str);
	for(i=0,j=len-1;i<j;i++,j--)
	{
		char t=str[i];
		str[i]=str[j];
		str[j]=t;
	}
	
	printf("reverse of sting is %s",str);
}