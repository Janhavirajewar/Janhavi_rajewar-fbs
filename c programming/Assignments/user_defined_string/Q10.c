// Write a program to check the string is palindrome or not.

#include<stdio.h>
#include<string.h>
void main() {
	char str[10];
	char rev[10];
	printf("enter string");
	scanf("%s",str);
	printf("%s",str);
	int l=strlen(str);

	printf("\n length is %d",l);

	char*c=strcpy(rev,str);

	char*r=strrev(str);
	printf("\n reverse string is %s",r);

	if(strcmp(c,r)==0) {
		printf("\n string is palindrome ");
	}

	else {
		printf("\n string is not palindrome");
	}

}

