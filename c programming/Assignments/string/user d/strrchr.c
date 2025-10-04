#include<stdio.h>
void main()
{
	char str[20];
	scanf("%s",str);
	//printf("%s",str);
	int ch;
	printf("enter char");
	scanf(" %c",&ch);
	char*t=strrchr(str,ch);
	  if (t == NULL)
        printf("Character not found.\n");
    else
        printf("Found at: %s\n", t);
}

char* strrchr(char*str,char ch)
{
	char *last = NULL;
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		
		if(str[i]==ch)
		last = &str[i]; 
	}
	return last;
}