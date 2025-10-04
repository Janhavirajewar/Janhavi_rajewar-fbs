int strlen(char*);
void main()
{
	char str[10];
	printf("enter string");
	scanf("%s",str);
	printf("string is %s",str);
	
	int l= strlen(str);
	printf("lngth is %d",l);
}
int strlen(char*ptr)
{
	int i=0;
	while(ptr[i]!='\0')
	{
		i++;
	}
	return i;
}