#include<stdio.h>
int palindrome(int);
int main()
{
	int num;
	printf("enter number :");
	scanf("%d",&num);
    int r=palindrome(num);
    if(r==1)
	{
		printf("This is palindrome number");
	}
	else
	{
		printf("This is not palindrome number");
	}

}
int palindrome(int num)
{
	
	int temp=0,rem=0,rev=0;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	
      if(rev==temp) return 1;     
	  else return 0;	
}