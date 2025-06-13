void perfect(int);
void main()
{
	int num;
	printf("Enter number");
	scanf("%d",&num);
	perfect( num);
}
void perfect(int num)
{
	int i=1,sum=0;
	while(i<num)
	{
		if(num%i==0)
		sum=sum+i;
		i++;
	}
		if(sum==num)
		{
			printf("perfect no is %d",sum);
		}
		else
		{
			printf("not perfect");
		}
}
