
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
		t1.min=t1.hr*60;
		
		t1.sec=t1.min*60;
		
		return t1;
}

void displayTime(Time t1)
{
	printf("time is : %d:%d:%d",t1.hr,t1.min, t1.sec );
	
}