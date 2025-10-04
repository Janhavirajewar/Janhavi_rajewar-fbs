char* strcpy(char* dest, char* src);
void main()
{
		char str[10];
		char str1[10];
	printf("enter string");
	scanf("%s",str);
	char*c=strcpy(str,str1);
	printf("%s",c);
}
char*strcpy(char*str,char*str1)
{
	int i=0;
	while(str[i]!='\0')
	{
		str1[i]=str[i];
			i++;
	}
	str1[i]='\0';
	return str1;
	
}

