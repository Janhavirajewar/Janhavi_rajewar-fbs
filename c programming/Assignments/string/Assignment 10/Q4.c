// WAP to Form a New String where the First Character and the Last Character have been Exchanged 


#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	char str1[100];
	printf("Enter string");        
	gets(str);
	printf("\n string is %s",str);
	int len=strlen(str);
	printf("\n length is %d",len);
	
	if(len >= 2)
	 {	
        strcpy(str1,str);

		char temp;
		 temp = str1[0];
	    str1[0] = str1[len - 1];
	    str1[len - 1] = temp;
	
	  printf("\n string %s", str);
        printf("\n New string %s", str1);


	}
}