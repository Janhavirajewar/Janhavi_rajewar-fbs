#include<stdio.h>
int last(int);
void main()
{	
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	last(num); 
}
int last(int num)
{
	int ld,rem;
	int s;
	ld=num%10;

	while(num>0)
	{
		rem=num%10;
		num=num/10;
	}
	s=ld+rem;
	printf("Addition of first and last digit is %d",s);
}