#include<stdio.h>
void store(int*,int);
void display(int*,int);
void search(int*,int);
void main()
{
	int arr[5];
	store(arr,5);
	display(arr,5);
	search(arr,5);
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

void search(int *ptr,int s)
{
	int n;
	printf("\n enter no you have to search");
	scanf("%d",&n);
	for(int i=0;i<s;i++)
	if(ptr[i]==n)
	{
		printf("\n found at posistion %d",i);
	}
}