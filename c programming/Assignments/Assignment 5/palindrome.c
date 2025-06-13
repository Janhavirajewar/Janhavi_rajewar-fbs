#include<stdio.h>
void palindrome();
void main()
{
	palindrome();
}
void palindrome()
{

	int num;
	int temp,rem,rev;
	printf("enter number :");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(rev==temp)
	{
		printf("%d is palindrome number",rev);
	}
	else
	{
		printf("%d is not palindrome number",rev);
	}
}