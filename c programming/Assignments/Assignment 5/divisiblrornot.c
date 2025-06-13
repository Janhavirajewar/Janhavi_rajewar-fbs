void divisibleornot();  // by 3 nd 5
void main()
{
	divisibleornot();
}
void divisibleornot()
{
	int num;
		printf("Enter the number");
		scanf("%d",&num);
	    if(num%3==0&&num%5!=0)
	    {
	    	printf("Number is divisible by 3 but not by 5");
		}
		else if(num%3!=0&&num%5==0)
		{
			printf("Number is divisible by 5 but not by 3");
		}
		else if(num%3==0&&num%5==0)
		{
			printf("Number is divisible by both 3 nd 5");
		}
		else
		{
			printf("Number is not divisible by 3 and 5");
		}
}