// Time (hour, min, sec) 

#include<stdio.h>
typedef struct Time
{
	int hr;
	int min;
	int sec;
}time;

void main()
{
	time srr[2];
	printf("enter time in hour min nd sec");
	for(int i=0;i<2;i++)
	{
		scanf("%d %d %d",&srr[i].hr,&srr[i].min,&srr[i].sec);
	}
	printf("\n --------------------------------------------------");
	printf("\n hr       min      sec");
	printf("\n--------------------------------------------------");
	
	for(int i=0;i<2;i++)
	{
		printf("\n%-10d",srr[i].hr);
		printf("%-10d",srr[i].min);
		printf("%-8d",srr[i].sec);
	}
	
}