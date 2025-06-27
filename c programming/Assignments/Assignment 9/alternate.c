#include<stdio.h>
void store(int*,int);
void alternate(int*,int);
void main()
{
	int arr[15];
	printf("Enter array elements");
	store(arr, 15);
	alternate(arr,15);
}

void store(int*ptr,int s)
{
	for(int i=0;i<s;i++)
	{
		scanf("%d",&ptr[i]);
	}
}

void alternate(int*arr,int s)
{
	for(int i=0;i<s;i=i+2)
	{
		printf("\n alternate elements are %d",arr[i]);
		
	}
}