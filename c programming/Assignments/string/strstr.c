#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	char s2[100];
	printf("enter string");
	gets(str);
	
	printf("enter string");
	gets(s2);
//	printf("string %s",s2);
	
char *ptr = strstr(str,s2);

    if (ptr != NULL) {
        printf("Found: %s\n", ptr);
    } else {
        printf("Not found\n");
    }


	
}