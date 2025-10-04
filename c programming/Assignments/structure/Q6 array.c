// Date (date, month, year) 

#include<stdio.h>
typedef struct Date
{
	int date;
	int month;
	int year;
	
}date;
void main()
 {
 	date srr[2];
	for(int i=0;i<2;i++)
	{
		printf("enter date month and year at index %d",i+1);
		scanf("%d",&srr[i].date);
		scanf("%d",&srr[i].month);
		scanf("%d",&srr[i].year);
	}
	
		printf("\n Date---month---year");
	for(int i=0;i<2;i++)
	{
		printf("\n %d      %d      %d",srr[i].date,srr[i].month,srr[i].year );
	}	
 }