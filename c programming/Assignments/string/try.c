#include<stdio.h>
void main()
{
	char str[10];
	
	int i=0;
	char ch;
	do
	{
		scanf("%c",&ch);           // we write it as scanf("%s",str); it cant read space
		str[i]=ch;
		i++;
	}while(ch!='\n');            
	str[i]!='\0';
	
	i=0;
		while(str[i]!='\0')         // we write it as printf("%s",str);
	{
		printf("%c",str[i]);
		i++;
	}
	printf("Length of string: %d\n", i);
    printf("Size of array: %lu\n", sizeof(str)); 
}