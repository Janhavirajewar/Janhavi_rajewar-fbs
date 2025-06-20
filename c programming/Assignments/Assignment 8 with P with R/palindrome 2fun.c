#include<stdio.h>
int pali(int);
int rev(int);
void main()
{
	int num;
	printf("enter number");
	scanf("%d",&num);
	if (pali(num))
	{
		printf(" %d is palindrome number",num);
	}
	else
	{
		printf(" %d is not palindrome number ",num);
	}
}
int pali(int num)
{
	if(num==rev(num))
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}
int rev(int num)
{
	int rem,revs=0;
	while(num>0)
	{
		rem=num%10;
		revs=revs*10+rem;
		num=num/10;
	}
	return revs;
}
