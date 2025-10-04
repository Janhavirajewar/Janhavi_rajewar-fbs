#include<stdio.h>
void main()
{
	char str[10];
	
	printf("enter string");
	scanf("%s",str);

	int i=0;
		while(str[i]!='\0')         // we write it as printf("%s",str);
	{
		printf("%c",str[i]);
		i++;
	}
	printf("Length of string: %d\n", i);
    printf("Size of array: %lu\n", sizeof(str)); 
}