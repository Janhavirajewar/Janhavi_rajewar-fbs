#include<stdio.h>
void sum();
void main()
{
	sum();
	
}
void sum()
{

	int num=12345,ld;
	int s,rem;
	ld=num%10;

	while(num>0)
	{
		rem=num%10;
		num=num/10;
	}
	
	s=ld+rem;
	printf("sum is %d",s);
}