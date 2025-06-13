#include<stdio.h>
void great(int,int,int);
void main() 
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	great(a,b,c);
}
void great(int n1,int n2,int n3)
{
	if(n1>n2) {
		if(n1>n3) 
		{
			printf("n1 is greater");
		} else
		{
			printf("n3 is greater");
		}
	}

	else {
		if(n2>n3) 
		{
    		printf("n2 is greater");
		} else
		{		
			printf("n3 is greater");
		}
	}
}