// Date (date, month, year)

#include<stdio.h>
typedef struct Date
{
	int date;
	int month;
	int year;
	
}Date;
Date storeDate();
void displayDate(Date);
void main()
 {
    Date d1;

    printf("Enter the date details:\n");
    d1 = storeDate();

    printf("\n Displaying Date:");
    displayDate(d1);
}


Date storeDate()
{
	 Date d1;
	 printf("enter date from 1 to 30" );
	 scanf("%d",&d1.date);
	 printf("enter month from 1 to 12");
	 scanf("%d",&d1.month);
	 printf("enter year");
	 scanf("%d",&d1.year);
	return d1;
}
void displayDate(Date d1)
{
	printf("\n date: %d-%d-%d",d1.date,d1.month ,d1.year );
}
