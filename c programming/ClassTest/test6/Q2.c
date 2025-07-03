#include<stdio.h>
void main()
{
	int arr[5];
	int arr2[5];
	printf("enter array elements"); 
	store(arr,5);
	printf("enter array elements"); 
	store(arr2,5);
	display(arr,arr2,5);
}

void store(int*arr,int s)
{
	for(int i=0;i<s;i++)
	scanf("%d",&arr[i]);
}

void display(int*arr,int*arr2,int s)
{
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			if(arr[i]==arr2[j])
			{
				printf("\n %d",arr[i]);
			}
		}
	}
}