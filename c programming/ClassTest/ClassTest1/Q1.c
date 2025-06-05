#include<stdio.h>

void main()
{
	int hh,min,sec;
	printf("enter hour, min , and second");
	scanf("%d%d%d",&hh,&min,&sec);
	int totalsec;
	totalsec=hh*3600+min*60+sec;
	printf("\n hour is %d",hh);
	printf("\n min is %d",min);
	printf("\n sec is %d",sec);
	
	printf("\n total sec is %d",totalsec);	
}