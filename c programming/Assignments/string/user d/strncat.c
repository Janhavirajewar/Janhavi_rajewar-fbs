char*mystrncat(char*,char*,int,int);
void main()
{
	char str1[20];
	char str2[10];
	int n=2;
	printf("enter string 1 and 2");
	scanf("%s%s",str1,str2);
	int l=strlen(str1);
//	printf("string is %s%s",str1,str2);
	
	char*p=mystrncat(str1,str2,l,n);
	printf("%s",p);
}
char*mystrncat(char*str1,char*str2,int l,int n)
{
	int i;
	for(i=0;i<n&&str2[i]!='\0';i++)
	{
		str1[l+i]=str2[i];
	}
	
	str1[l+i]='\0';
	
	return str1;
}