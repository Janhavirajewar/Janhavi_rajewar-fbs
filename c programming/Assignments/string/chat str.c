void main()
{
	char str[10]="helo";
	int i=0;
	while(str[i]!='\0')
	{
		printf("%c",str[i]);
		i++;
	}
	 printf("\nsize is %u",sizeof(str));
	 printf("length is %d",i);
}