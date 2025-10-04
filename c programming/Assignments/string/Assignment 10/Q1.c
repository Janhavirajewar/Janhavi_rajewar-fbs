#include<stdio.h>
#include<string.h>
void main() {
	char str[10];
	printf("enter string");
	scanf("%s",str);
	char ch;
	printf("enter character you have to search");
	scanf(" %c",&ch);

	char *ptr=strchr(str,ch);
	if (ptr != NULL) {
		printf("Character '%c' found at position: %ld\n", ch, ptr - str);
	} else {
		printf("Character '%c' not found in the string.\n", ch);
	}

}
