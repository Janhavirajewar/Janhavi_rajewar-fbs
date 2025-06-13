#include<stdio.h>
void pali(int);
int main()
{
	int num;
	printf("enter number :");
	scanf("%d",&num);
	pali(num);
}
void pali(int num)
{
	int temp,rem=0,rev=0;
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