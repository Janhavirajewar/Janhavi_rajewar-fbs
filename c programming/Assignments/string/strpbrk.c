#include<string.h>
void main()
{
	char str[10];
	printf("enter string");
	scanf("%s",str);
	
	printf("\n string is %s",str);
	char ch;
	  printf("enter char you have to find");
	  scanf(" %c",&ch);
	  
	  char*p=strpbrk(str,&ch);
	  
	 if (p != NULL)
            printf("Character '%c' found. Remaining string: %s\n", ch, p);
    else
        printf("Character '%c' not found in string.\n", ch);
}