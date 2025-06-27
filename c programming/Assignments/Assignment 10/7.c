// WAP to Remove the Characters of Odd Index Values in a String

#include<stdio.h>
char*odd(char*);
void main()
{
	char str[10];
	printf("enter string");
	scanf("%s",str);
	printf("string is %s",str);
	char*p=odd(str);
	printf("\n %s",p);
}
char*odd(char*str)
{
	int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0) {  // even index
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';  
    return str;
}