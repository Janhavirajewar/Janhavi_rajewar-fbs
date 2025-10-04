#include<stdio.h>

void main()
{
	char str[10];
	char str1[10];
	printf("enter string");
	scanf("%s",str);
	 printf("\n1st string is %s",str);
	 
	 int i=0;
		while(i<4)
		{
			str1[i]=str[i];
			i++;
	}
		str1[i]='\0';
	printf("\n second string is %s",str1);
}