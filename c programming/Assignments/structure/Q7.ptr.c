
// Time (hour, min, sec) :

#include<stdio.h>
typedef struct Time
{
	int hr;
	int min;
	int sec;
	
}Time;
void storeTime(Time*);
void displayTime(Time*);
void main()
{
	Time t1;
	
	printf("enter time in hour , min , sec");
	storeTime(&t1);
	
	printf("time is: ");
	displayTime(&t1);
}

void storeTime(Time*t1)
{
		printf("/n enter hour");
		scanf("%d",&t1->hr);
		printf("\n enter minute");
		scanf("%d",&t1->min );
		printf("\n enter second");
		scanf("%d",&t1->sec );
	
}

void displayTime(Time*t1)
{
	printf("time is : %d:%d:%d",t1->hr,t1->min, t1->sec );
	
}