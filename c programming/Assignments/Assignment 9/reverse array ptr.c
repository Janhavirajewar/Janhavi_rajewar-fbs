#include<stdio.h>
void store(int*,int);
void display(int*,int);
void reverse(int*,int);
void main()
{
	int arr[15];
	store(arr,15);
	display(arr,15);
	reverse(arr,15);
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

void reverse(int *ptr,int s)
{ 		
	for(int i=14;i>=0;i--)
	{
		printf("\n reverse of array is %d",ptr[i]);
	}
}