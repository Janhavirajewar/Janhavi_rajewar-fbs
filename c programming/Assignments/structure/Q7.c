
// Time (hour, min, sec) :

#include<stdio.h>
typedef struct Time
{
	int hr;
	int min;
	int sec;
}Time;
Time storeTime();
void displayTime(Time);
void main()
{
	Time t1;
	
	printf("enter time in hour , min , sec");
	t1=storeTime();
	
	printf("time is: ");
	displayTime(t1);
}

Time storeTime()
{
		Time t1;
		printf("/n enter hour");
		scanf("%d",&t1.hr);
		printf("\n enter minute");
		scanf("%d",&t1.min );
		printf("\n enter second");
		scanf("%d",&t1.sec );
		
		return t1;
}

void displayTime(Time t1)
{
	printf("time is : %d:%d:%d",t1.hr,t1.min, t1.sec );
	
}