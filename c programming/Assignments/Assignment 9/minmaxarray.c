void store(int*,int);
void display(int*,int);
int ismax(int*,int);
int ismin(int*,int);
void main()
{
	int arr[10];
	printf("enter array element");
	store(arr,10);
	
	printf("elements in array");
	display(arr,10);
	
	
	int m=ismax(arr,10);
	{
		printf("\n max element is %d",m);
	}
		int n=ismin(arr,10);
	{
		printf("\n min element is %d",n);
	}

}

void store(int*ptr,int s)
{
	for(int i=0;i<s;i++)
	{
		scanf("%d",&ptr[i]);
	}
}
void display(int*ptr,int s)
{
	for(int i=0;i<s;i++)
	{
		printf("\n %d",ptr[i]);
	}
}



int ismax(int *ptr,int s)
{
	 int max=ptr[0];
	for(int i=0;i<s;i++)
	{
		if(ptr[i]>max)
		max=ptr[i];
	}	
	return max;
}

int ismin(int *ptr,int s)
{
	 int min=ptr[0];
	for(int i=0;i<s;i++)
	{
		if(ptr[i]<min)
		min=ptr[i];
	}	
	return min;
}