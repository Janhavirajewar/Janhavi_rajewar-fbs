#include <stdio.h>
#include <string.h>

int main() {
	
	char s1[20];
	char s2[20];
	 printf("enter two strings");
	 scanf("%s%s",s1,s2);
	
	int l=strncmp(s1,s2,2);
    printf("%d",l);
    return 0;
}