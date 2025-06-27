#include<stdio.h>
void store(int*,int);
void display(int*,int);
void merge(int*,int*,int*,int);
void mergedisplay(int*,int);
void main()
{
	int arr[5];
	int brr[5];
	int crr[10];
	
	printf("\n enter 1st array element");
	store(arr,5);
	display(arr,5);
	
	printf("\n enter 2nd array element");
	store(brr,5);
	display(brr,5);
	
	merge(arr,brr,crr,5);
	mergedisplay(crr,10);
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
void merge(int *arr,int *brr,int *crr,int s)
{
	   for (int i = 0; i < s; i++) {
        crr[i] = arr[i];
    }
    for (int i = 0; i < s; i++) {
        crr[i + s] = brr[i];
    }
}

void mergedisplay(int*crr,int s)
{
	for(int i=0;i<s;i++)
	{
		printf("\n merge aray is %d",crr[i]);
	}
}