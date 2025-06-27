#include<stdio.h>
void store(int*,int);
void display(int*,int);
void isprime(int*,int);
void main()
{
	int arr[5];
	store(arr,5);
	display(arr,5);
	isprime(arr,5);
}

void store(int*ptr,int s)
{
	printf("\n enter array elements: ");
	for(int i=0;i<s;i++)
	{
		scanf("%d",&ptr[i]);
	}
}

void display(int*ptr,int s)
{
	for(int i=0;i<s;i++)
	{
		printf("\n array elements are %d",ptr[i]);
	}
}
void isprime(int*arr,int s)
{

	for(int i = 0; i < s; i++)
	{
		int num = arr[i];
		
		if(num <= 1)
			continue;

		int flag = 0;
		for(int j = 2; j <= num/2; j++)
		{
			if(num % j == 0)
			{
				flag = 1;
				break;
			}
		}

		if(flag == 0)
		{
			printf("\nPrime number is %d", num);
		}
	}
}
