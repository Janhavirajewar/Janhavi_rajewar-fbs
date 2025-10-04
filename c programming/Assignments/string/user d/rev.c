// Write a program to check the string is palindrome or not.

#include<stdio.h>
void main()
{
	char str[10];
	char rev[10];
	printf("enter string");
	scanf("%s",str);
	printf("%s",str);
	int l=strlen(str);
	printf("\n %d",l);
	pali(str,rev,l);

}

void pali(char*str,char*rev,int l)
{
	int i,isPalindrome=1;
	for(i=0;i<l;i++)
	{
		rev[i]=str[l-i-1];
	}
	
	rev[i]='\0';
	
	printf("%s",rev);
	
	 for (i = 0; i < l; i++) {
        if (str[i] != rev[i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome==1)
        printf("The string \"%s\" is a palindrome.\n", str);
    else
        printf("The string \"%s\" is not a palindrome.\n", str);

}
