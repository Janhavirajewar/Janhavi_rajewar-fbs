#include<stdio.h>
void main()
{
	int num=12345,ld,fd;
	int s;
	ld=num%10;

	while(num>=10)
	{
		num=num/10;
	}
	fd=num;
	s=ld+fd;
	printf("sum is %d",s);
}