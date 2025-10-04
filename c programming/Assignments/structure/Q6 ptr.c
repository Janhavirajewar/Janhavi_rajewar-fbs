// Date (date, month, year)

#include<stdio.h>
typedef struct Date
{
	int date;
	int month;
	int year;
	
}Date;

void storeDate(Date*);
void displayDate(Date*);
void main()
 {
    Date d1;

    printf("Enter the date details:\n");
    storeDate(&d1);

    printf("\n Displaying Date:");
    displayDate(&d1);
}


void storeDate(Date*d1)
{
	 
	 printf("enter date from 1 to 30" );
	 scanf("%d",&d1->date);
	 printf("enter month from 1 to 12");
	 scanf("%d",&d1->month);
	 printf("enter year");
	 scanf("%d",&d1->year);

}
void displayDate(Date*d1)
{
	printf("\n date: %d/%d/%d",d1->date,d1->month ,d1->year );
}
