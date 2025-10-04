#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	
	printf("enter string");
	scanf("%s",str);
	printf("string is %s",str);

		
	strrev(str);

	printf("\n reverse  string is %s",str);

	
}