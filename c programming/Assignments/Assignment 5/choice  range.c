#include<stdio.h>
void choice();
void main()
{
	
	choice();
}
void choice()
{
	int ch,num;
	printf("enter choice: ");
	scanf("%d",&ch);
	printf("enter no: ");
	scanf("%d",&num);
	if(ch==1)
	{
 	 	 	if(num%2==0)
	 	{
	 		printf("%d is even number",num);
		 }
		 else
		 {
		 	printf("\n %d is odd number",num);
		 }
	}
	 
	 if(ch==2)
	 {

	int flag=0,i=2;
	
	while(i<num)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
			i++;
	}
		if(flag==0)
		{
			printf("prime no is %d",num);
		}
		else
		{
			printf("%d is not prime no",num);
		}
	
	}
	
	if(ch==3)
	{

	int temp,rem,rev;

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
	
	if(ch==4)
	{
		
		if(num>0)
		{
			printf("%d is positive",num);
		}
		else
		printf("negative");
		
	}
	
	if(ch==5)
	{
		
		int rev=0,rem=0;
	
		int t=num;
		while(num>0)
		{
			rem=num%10;
			rev=(rev*10)+rem;
			num=num/10;
		}
		printf("rev is %d",rev);
	}
	
	if(ch==6)
	{
	
		int sum=0,remm=0;
		
		int t1=num;
		while(num>0)
		{
			remm=num%10;
			sum=sum+remm;
			num=num/10;
		}
				printf("sum of digit is %d",sum);
		
	}
	
}