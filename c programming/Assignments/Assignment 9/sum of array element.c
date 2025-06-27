#include<stdio.h>
void store(int*,int);
void display(int*,int);
void sum(int*,int);
void main()
{
	int arr[5];
	store(arr,5);
	sum(arr,5);
}

void store(int*ptr,int s)
{
	printf("\n enter array elements: ");
	for(int i=0;i<s;i++)
	{
		scanf("%d",&ptr[i]);
	}
}

void sum(int *ptr,int s)
{ 		
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum+ptr[i];
	}
	printf("sum of array element is %d",sum);
}