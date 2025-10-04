#include <stdio.h>
#include <string.h>

int main() {
    	char str[20];
	char str2[10];
	 printf("enter two strings");
	 scanf("%s%s",str,str2);
	 
	 printf("\nfirst string is %s",str);
	 printf("\nsecond string is %s",str2);
    int l=strcmp(str,str2);
    printf("Compare: %d\n",l ); 
    return 0;
}