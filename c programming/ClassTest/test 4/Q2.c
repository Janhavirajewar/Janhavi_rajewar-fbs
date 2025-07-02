// power of any no

#include <stdio.h>

void main()
{
	int base,exponent,res=1;
	printf("enter base and exponent:");
	scanf("%d%d",&base,&exponent);
	for(int i=0;i<exponent;i++)
	{
		res=res*base;
	}

	printf("power is of %d is %d",base,res);
}
