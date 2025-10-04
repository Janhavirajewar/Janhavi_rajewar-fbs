#include<stdio.h>
int strncmp(char*,char*,int );
int main()
{
	char str1[10];
	char str2[20];
	int n=2;
	 printf("enter string");
	 scanf("%s%s",str1,str2);
	 
	 printf("string is %s%s",str1,str2);
	 int r=strncmp(str1,str2,n);
	 	if (r == 0) {
        printf("Both strings are equal.\n");
    } else if (r > 0) {
        printf("\n str1 is greater.\n");
    } else {
        printf("\n str2 is greater.\n");
    }
}

int strncmp(char*str1,char*str2,int n)
{
int i=0;
	while(i<n)
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
		i++;
	}
	return 0;
	
}
   
