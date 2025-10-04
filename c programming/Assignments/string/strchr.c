#include <stdio.h>
#include <string.h>

int main() {
    char str[10] ;
    printf("enter  string");
	 scanf("%s",str);
	 
	 char ch;
	 printf("enter char you have to find");
	 scanf(" %c", &ch);
    char*ptr = strchr(str,ch);  // Find first 'n' in "banana"

    if (ptr != NULL) {
       printf("Character '%c' found at position: %ld\n", ch, ptr-str );
        printf("Remaining string from that character: %s\n", ptr);
       
    } else {
        printf("Character not found\n");
    }

    return 0;
}