#include<stdio.h>
void store(int*,int);
void display(int*,int);
void evenodd(int*,int);
void main()
{
	int arr[5];
	store(arr,5);
	evenodd(arr,5);
}

void store(int*ptr,int s)
{
	printf("\n enter array elements: ");
	for(int i=0;i<s;i++)
	{
		scanf("%d",&ptr[i]);
	}
}

void evenodd(int *ptr,int s)
{ 		
	int sum=0;
	for(int i=0;i<5;i++)
	{
		if(ptr[i]%2==0)
		{
			printf("\n even element is %d",ptr[i]);
		}
		else
			printf("\n odd element is %d",ptr[i]);
	}
	
}