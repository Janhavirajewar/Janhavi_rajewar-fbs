#include<stdio.h>
int main()
{
	char str[10];
	
	printf("enter string");
	scanf("%s",str);
	int i=0;
	while(str[i]!='\0')
	{
		printf("%c",str[i]);
		i++;
	}
	
	printf("\n length of string is %d",i);

	
}