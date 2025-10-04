#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter array element");
	
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	 int sum=0;
	for(int i=0;i<5;i=i+2)
	{
		sum=sum+arr[i];
	}
	printf("sum of altername element is %d",sum);
}