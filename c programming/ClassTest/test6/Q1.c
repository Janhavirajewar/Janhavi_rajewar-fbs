#include<stdio.h>
void main()
{
	int arr[5];
	printf("enter array elements");
	store(arr,5);
	display(arr,5);
}

void store(int*arr,int s)
{
	for(int i=0;i<s;i++)
	scanf("%d",&arr[i]);
}


void display(int*arr,int size)
{
	
    int max1 = arr[0];

	
	for (int i = 0; i < size; i++)   // 4 3 6 7 3 
	{
		if (arr[i] > max1)
			max1 = arr[i];   // 7
	}


	int max2 =arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max2 && arr[i] != max1)  // 6&&7!=6=6
			max2 = arr[i];
	}

    printf("Maximum number is: %d\n", max1);
    printf("Second maximum number is: %d\n", max2);
}
