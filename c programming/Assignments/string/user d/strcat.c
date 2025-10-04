char*mystrcat(char*,char*,int);
void main()
{
	char str1[20];
	char str2[10];
	
	printf("enter string 1 and 2");
	scanf("%s%s",str1,str2);
	int l=strlen(str1);
	printf("\n string is %s%s",str1,str2);
	
	char*p=mystrcat(str1,str2,l);
	printf("%s",p);
}
char*mystrcat(char*str1,char*str2,int l)
{
	int i;
	for(i=0;str2[i]!='\0';i++)
	{
		str1[l+i]=str2[i];
	}
	
	str1[l+i]='\0';
	
	return str1;
}