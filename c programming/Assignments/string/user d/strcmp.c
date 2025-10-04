void main()
{
	char str1[10];
	char str2[20];
	 printf("enter string");
	 scanf("%s%s",str1,str2);
	 
	 printf("string is %s%s",str1,str2);
	 int r=strcmp(str1,str2);
	 	if (r == 0) {
        printf("Both strings are equal.\n");
    } else if (r > 0) {
        printf("\n str1 is greater.\n");
    } else {
        printf("\n str2 is greater.\n");
    }
}

int strcmp(char*str1,char*str2)
{
	int i;
	for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
		{
			if(str1[i]>str2[i])
			{
				return 1;
			}
			else
			{
				return -1;
			}
		}
			return 0;
	}
	
	
}