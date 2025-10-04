// WAP to Count the Number of Vowels in a String 
#include<stdio.h>
int vowel(char*);
void main()
{
	char str[10];
	printf("enter string");
	scanf("%s",str);
	printf("string is %s",str);
	int r=vowel(str);
	printf("\n number of voewls in string is %d",r);
}
int vowel(char*str)
{
	int i=0,c=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			c++;
		}
		i++;
	}
	return c;
}